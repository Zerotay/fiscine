/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 20:43:37 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/18 16:34:45 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			checkbase(char *base);

void		checkatoi(char *str, int *i, int *j);

void		lastletter(char *str, int *i, char *base);

int			answer(char *str, int i, char *base, int length);

int			len(char *base_to);

int			alength(int p, char *base_to)
{
	int		i;
	int		length;

	i = len(base_to);
	length = 1;
	while (p >= i)
	{
		p /= i;
		length++;
	}
	return (length);
}

char		*makemalloc(int alength)
{
	char *ar;

	ar = (char *)malloc(sizeof(char) * (alength + 1));
	if (ar == 0)
		return (0);
	ar[alength + 1] = 0;
	return (ar);
}

char		*final(int p, char *base_to, int alength)
{
	char	*arr;
	int		k;

	k = 1;
	if (p < 0)
	{
		arr = makemalloc(alength++ + 1);
		while (--alength + 1 > 0)
		{
			arr[alength + 1 - 1] = base_to[(p / k % len(base_to)) * -1];
			k *= len(base_to);
		}
		arr[0] = '-';
	}
	else
	{
		arr = makemalloc(alength++);
		while (--alength > 0)
		{
			arr[alength - 1] = base_to[(p / k) % len(base_to)];
			k *= len(base_to);
		}
	}
	return (arr);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		j;
	int		length;
	int		p;
	char	*ans;

	i = 0;
	j = 0;
	if (checkbase(base_from) || checkbase(base_to))
		return (0);
	length = 0;
	while (base_from[length])
		length++;
	checkatoi(nbr, &i, &j);
	lastletter(nbr, &i, base_from);
	p = answer(nbr, i, base_from, length);
	if (j % 2 == 1)
		p *= -1;
	if (p == -2147483648)
		ans = final(p, base_to, 10);
	else if (p < 0)
		ans = final(p, base_to, alength((p * -1), base_to));
	else
		ans = final(p, base_to, alength(p, base_to));
	return (ans);
}
