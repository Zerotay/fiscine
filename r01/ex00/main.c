/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:44:26 by jinukim           #+#    #+#             */
/*   Updated: 2020/08/08 18:20:42 by jinukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*make(unsigned int bi);

int		rduptest(unsigned int bi);

int		cduptest(unsigned int bi);

int		pick(unsigned int bi, int i, int j);

int		compare(int *a, int *b)
{
	int				i;

	i = -1;
	while (++i < 16)
		if (a[i] != b[i])
			return (0);
	return (1);
}

void	printmat(unsigned int bi)
{
	int				i;
	int				j;
	char			a;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			a = pick(bi, i, j) + 1 + '0';
			write(1, &a, 1);
			if (j != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
		}
	}
}

int		cvrt(int *input, char **argv)
{
	int				i;
	int				idx;
	int				ret;

	idx = 0;
	i = 0;
	while (argv[1][idx])
	{
		ret = 0;
		while (argv[1][idx] && argv[1][idx] == ' ')
			idx++;
		while (argv[1][idx] && argv[1][idx] != ' ')
			ret = ret * 10 + argv[1][idx++] - '0';
		while (argv[1][idx] && argv[1][idx] == ' ')
			idx++;
		if (ret < 1 || ret > 4)
			return (1);
		if (ret && i == 16)
			return (1);
		input[i++] = ret;
	}
	if (i != 16)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	unsigned int	bi;
	int				input[16];
	int				*see;

	if (argc != 2 || cvrt(input, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	bi = 0x1b4eb1e4 - 1;
	while (++bi <= 0xe4b14e1b)
	{
		if (rduptest(bi))
			continue;
		if (cduptest(bi))
			continue;
		see = make(bi);
		if (compare(see, input))
		{
			printmat(bi);
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
