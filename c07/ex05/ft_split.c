/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:30:48 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/18 19:31:15 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			set(char i, char *charset)
{
	int		j;

	j = 0;
	while (charset[j])
	{
		if (i == charset[j])
			return (1);
		j++;
	}
	return (0);
}

void		make_split(char **answer, char *charset, char *str)
{
	int		i;
	int		j;
	int		ans;
	int		k;

	i = -1;
	j = 0;
	ans = 0;
	while (str[++i])
	{
		if (((i == 0) && !set(str[i - 1], charset))
				|| (set(str[i - 1], charset) && !set(str[i], charset)))
			j = i;
		if ((!set(str[i], charset) && set(str[i + 1], charset))
				|| (!str[i + 1] && !set(str[i], charset)))
		{
			answer[ans] = (char *)malloc(sizeof(char) * (i - j + 2));
			answer[ans][i - j + 1] = 0;
			k = -1;
			while (j + ++k < i + 1)
				answer[ans][k] = str[j + k];
			ans++;
		}
	}
}

char		**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**answer;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!set(str[i], charset) && set(str[i + 1], charset))
			count++;
		if (set(str[i], charset) && !str[i + 1])
			count--;
		i++;
	}
	answer = (char **)malloc(sizeof(char *) * (count + 2));
	answer[count + 1] = 0;
	make_split(answer, charset, str);
	return (answer);
}
