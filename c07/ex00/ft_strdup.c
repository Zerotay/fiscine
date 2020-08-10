/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:23:38 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 16:43:37 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*i;
	int		j;

	j = 0;
	while (src[j])
		j++;
	i = (char *)malloc(sizeof(char) * j + 1);
	j = 0;
	while (src[j])
	{
		i[j] = src[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}
