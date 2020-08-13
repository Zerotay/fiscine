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
			return(1);
	}
	return (0);
}



char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	int count;
	char **answer;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (set(str[i], charset) && !set(str[i + 1], charset) && !str[i + 1])
			if (i != 0)
				count++;
		i++;
	}
	answer = (char **)malloc(sizeof(char *) * (count + 1));

}
