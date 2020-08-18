/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:25:10 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/16 07:10:13 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_string2.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_nline(char *str)
{
	int	i;
	int	nline;
	int	prev;

	prev = 0;
	nline = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (prev != i)
				nline++;
			prev = i + 1;
		}
		i++;
	}
	if (i != 0 && prev != i)
		nline++;
	return (nline);
}

char	*ft_strcpy(char **dest, char *src, int *size)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != ' ' && src[i] != '\n' && src[i] != ':')
		i++;
	*dest = malloc(i + 1);
	i = 0;
	while (src[i] && src[i] != ' ' && src[i] != '\n' && src[i] != ':')
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = 0;
	if (size != 0)
		*size = i;
	return (src + i);
}

char	*ft_skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == ':' || str[i] == '\n')
		i++;
	return (str + i);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_putstr(char *str,char *dest)
{
  int str_len;
  int dest_len;
  char *result;

  str_len = ft_strlen(str);
  dest_len = ft_strlen(dest);
  result = malloc(str_len + dest_len + 10);
  ft_strncpy(result,dest,dest_len);
  result[dest_len] = ' ';
  ft_strncpy(result + dest_len + 1, str, str_len);
  free(dest);
  return (result);
}
