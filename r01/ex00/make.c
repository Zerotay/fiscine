/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:03:13 by jinukim           #+#    #+#             */
/*   Updated: 2020/08/08 18:20:00 by jinukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		pick(unsigned int bi, int i, int j);

void	up(int *arr, unsigned int bi)
{
	int				t;
	int				n;
	int				i;
	int				j;

	i = -1;
	while (++i < 4)
	{
		n = 0;
		t = 0;
		j = -1;
		while (++j < 4)
			if (t <= pick(bi, j, i))
			{
				n++;
				t = pick(bi, j, i);
			}
		arr[i] = n;
	}
}

void	down(int *arr, unsigned int bi)
{
	int				t;
	int				n;
	int				i;
	int				j;

	i = -1;
	while (++i < 4)
	{
		n = 0;
		t = 0;
		j = 4;
		while (--j >= 0)
			if (t <= pick(bi, j, i))
			{
				n++;
				t = pick(bi, j, i);
			}
		arr[i + 4] = n;
	}
}

void	left(int *arr, unsigned int bi)
{
	int				t;
	int				n;
	int				i;
	int				j;

	i = -1;
	while (++i < 4)
	{
		n = 0;
		t = 0;
		j = -1;
		while (++j < 4)
			if (t <= pick(bi, i, j))
			{
				n++;
				t = pick(bi, i, j);
			}
		arr[i + 8] = n;
	}
}

void	right(int *arr, unsigned int bi)
{
	int				t;
	int				n;
	int				i;
	int				j;

	i = -1;
	while (++i < 4)
	{
		n = 0;
		t = 0;
		j = 4;
		while (--j >= 0)
			if (t <= pick(bi, i, j))
			{
				n++;
				t = pick(bi, i, j);
			}
		arr[i + 12] = n;
	}
}

int		*make(unsigned int bi)
{
	int				*arr;

	arr = (int*)malloc(16 * 4);
	up(arr, bi);
	down(arr, bi);
	left(arr, bi);
	right(arr, bi);
	return (arr);
}
