/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:41:23 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/16 07:23:14 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"
#include "ft_string.h"
#include "ft_string2.h"
#include "ft_ptriple.h"
#include <stdlib.h>
#include <unistd.h>

t_dict		*parse(char *str)
{
	int		idx;
	t_dict	*data;

	idx = 0;
	data = malloc(sizeof(t_dict) * ft_nline(str) + 1);
	while (*str)
	{
		data[idx].key = malloc(sizeof(char *));
		data[idx].value = malloc(sizeof(char *));
		str = ft_strcpy(data[idx].key, str, &(data[idx].key_len));
		str = ft_skip_space(str);
		str = ft_strcpy(data[idx].value, str, 0);
		str = ft_skip_space(str);
		idx++;
	}
	data[idx].key = NULL;
	return (data);
}

void		free_parse(t_dict *data)
{
	int		i;

	i = 0;
	while (data[i].key)
	{
		free(*(data[i].key));
		free(*(data[i].value));
		free(data[i].key);
		free(data[i].value);
		i++;
	}
	free(data);
}

char		*ft_pnum(char *num, t_dict *lib)
{
	int		num_len;
	int		max_unit;
	int		i;
	char	*result;

	result = malloc(1);
	result[0] = 0;
	eraze_zero(num);
	num_len = ft_strlen(num);
	if (num_len == 0)
	{
		result = ft_putstr(findvalue(lib, "0"), result);
		return (result);
	}
	max_unit = (num_len - 1) / 3;
	ft_ptriple(lib, num, num_len - 3 * max_unit, &result);
	i = max_unit + 1;
	if (max_unit)
		result = ft_punit(max_unit, lib, result);
	while (--i > 0)
		if (ft_ptriple(lib, num + num_len - 3 * i, 3, &result))
			result = ft_punit(i - 1, lib, result);
	return (result);
}

char		*ft_punit(int max, t_dict *data, char *result)
{
	int		i;
	char	*key_str;

	max = max * 3 + 1;
	if (max == 1)
		return (result);
	if (!(key_str = malloc(max + 1)))
		return (result);
	key_str[0] = '1';
	i = 0;
	while (++i <= max)
		key_str[i] = (i == max ? 0 : '0');
	i = -1;
	while (data[++i].key)
		if (max == data[i].key_len)
			if (!ft_strcmp(*(data[i].key), key_str))
				break ;
	if (data[i].key == NULL)
		return (result);
	free(key_str);
	result = ft_putstr(*(data[i].value), result);
	return (result);
}
