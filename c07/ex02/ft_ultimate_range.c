/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:24:56 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/12 12:32:11 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
		return (0);
	i = max - min;
	*range = (int *)malloc(sizeof(int) * i);
	j = 0;
	while (j < i)
	{
		(*range)[j] = min;
		min++;
		j++;
	}
	return (i);
}
