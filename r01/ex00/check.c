/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:02:58 by jinukim           #+#    #+#             */
/*   Updated: 2020/08/08 18:21:12 by jinukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		pick(unsigned int bi, int i, int j)
{
	bi >>= (8 * (3 - i));
	bi >>= (2 * (3 - j));
	return (3 & bi);
}

int		rduptest(unsigned int bi)
{
	unsigned int	mask;
	int				pool[4];
	int				i;

	mask = 3;
	i = 0;
	while (i < 4)
	{
		pool[i] = 0;
		i++;
	}
	i = 0;
	while (i < 16)
	{
		pool[bi & mask]++;
		if (pool[bi & mask] > i / 4 + 1)
			return (1);
		bi >>= 2;
		i++;
	}
	return (0);
}

int		cduptest(unsigned int bi)
{
	int				pool[4];
	int				i;
	int				j;

	i = -1;
	j = -1;
	while (++i < 4)
		pool[i] = 0;
	i = -1;
	while (++j < 4)
		while (++i < 4)
		{
			pool[pick(bi, i, j)]++;
			if (pool[pick(bi, i, j)] > j + 1)
				return (1);
		}
	return (0);
}
