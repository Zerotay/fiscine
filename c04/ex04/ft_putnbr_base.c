/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:42:03 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 20:00:43 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void		print(int nbr, int i, char *base)
{
	if (nbr < i)
		write(1, &base[nbr % i], 1);
	else
	{
		print(nbr / i, i, base);
		write(1, &base[nbr % i], 1);
	}
}

int		check(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	j = i + 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (check(base))
	{
		if (nbr < 0)
		{
			j = nbr % i * -1;
			write(1, "-", 1);
			if (nbr / i * -1 > 0)
				print(nbr / i * -1, i, base);
			write(1, &base[j], 1);
		}
		else
			print(nbr, i, base);
	}
}
