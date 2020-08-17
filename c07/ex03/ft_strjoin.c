/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:53:42 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/12 12:47:50 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			strlength(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			guide(int size, char **strs, char *sep, char **i)
{
	int		j;
	int		k;
	int		seplen;
	int		count;

	j = -1;
	count = 0;
	seplen = strlength(sep);
	while (++j < size)
	{
		k = 0;
		while (strs[j][k])
			k++;
		count += (k);
		i[2 * j] = (char *)malloc(sizeof(char) * (k));
		i[2 * j] = strs[j];
		if (j != 0)
		{
			i[2 * j - 1] = (char *)malloc(sizeof(char) * (seplen));
			i[2 * j - 1] = sep;
		}
	}
	return (count);
}

char		*answers(int count, char **i, int size)
{
	char	*answer;
	int		j;
	int		k;
	int		l;

	answer = (char *)malloc(sizeof(char) * count);
	j = 0;
	l = 0;
	while (j < size * 2 - 1)
	{
		k = 0;
		while (i[j][k])
		{
			answer[l] = i[j][k];
			l++;
			k++;
		}
		j++;
	}
	answer[l] = 0;
	return (answer);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	**i;
	int		seplen;
	int		count;
	char	*only;

	if (size <= 0)
	{
		only = (char *)malloc(sizeof(char));
		only[0] = 0;
		return (only);
	}
	seplen = strlength(sep);
	i = (char **)malloc(sizeof(char *) * (size * 2 - 1));
	count = (seplen) * (size - 1);
	count += guide(size, strs, sep, i);
	return (answers(count, i, size));
}
