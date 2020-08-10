/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:40:34 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 19:43:44 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *str, char *to_find, int i, int len)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j < len)
	{
		if (str[i + j] == to_find[j])
			count++;
		j++;
	}
	if (count == len)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[len])
		len++;
	while (str[i])
	{
		if (to_find[0] == str[i])
			if (compare(str, to_find, i, len))
				return (str + i);
		i++;
	}
	return (0);
}
