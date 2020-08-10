/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:45:22 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 21:38:42 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *i;
	int j;
	int k;
	
	if (min >= max)
		return (0);
	j = max - min;
	i = (int *)malloc(sizeof(int) * j);
	k = 0;
	while (k < j)
	{
		i[k] = min;
		min++;
		k++;
	}
	return (i);
}
