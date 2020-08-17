/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki </var/mail/dongguki>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 21:36:32 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/13 21:57:37 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int set(char i,  char *charset)
{
	int j;

	j = 0;
	while (charset[j])
	{
		if (i == charset[j])
			return (1);
		j++;
	}
	return (0);
}

void make_partion(char **answer, char *str, int *i, int *j, int *ans)
{
	int k;

	answer[*ans] = (char *)malloc(sizeof(char) * (*i - *j + 2));
	answer[*ans][*i - *j + 1] = 0;
	k = 0;
	while (*j + k < *i + 1)
	{
		answer[*ans][k] = str[*j + k];
		k++;
	}
}


void make_split(char **answer, char *charset, char *str)
{
	int i;
	int j;
	int ans;

	i = 0;
	j = 0;
	ans = 0;
	while (str[i])
	{
		if(((i == 0) && !set(str[i - 1], charset))
			|| (set(str[i - 1], charset) && !set(str[i], charset)))
				j = i;
		if ((!set(str[i], charset) && set(str[i + 1], charset))
			|| (!str[i + 1] && !set(str[i], charset)))
		{
			make_partion(answer, str, &i, &j, &ans);
			ans++;
		}
		i++;
	}
}


char	**ft_split(char *str, char *charset)
{
	int i;
	int count;
	char **answer;

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
