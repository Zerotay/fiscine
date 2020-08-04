/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:26:11 by nalee             #+#    #+#             */
/*   Updated: 2020/08/01 22:12:56 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		firstline(int a);

void		midline(int a);

void		lastline(int a);

void		rush(int a, int b);

void		ft_putchar(char c);

void		firstline(int a)
{
	int garo;

	garo = 0;
	ft_putchar('A');
	while (garo < a - 2)
	{
		ft_putchar('B');
		garo++;
	}
	while (a > 1)
	{
		ft_putchar('A');
		break ;
	}
}

void		midline(int a)
{
	int garo;

	garo = 0;
	ft_putchar('B');
	while (garo < a - 2)
	{
		ft_putchar(' ');
		garo++;
	}
	while (a > 1)
	{
		ft_putchar('B');
		break ;
	}
}

void		lastline(int a)
{
	int garo;

	garo = 0;
	ft_putchar('C');
	while (garo < a - 2)
	{
		ft_putchar('B');
		garo++;
	}
	while (a > 1)
	{
		ft_putchar('C');
		break ;
	}
}

void		rush(int a, int b)
{
	int sero;

	sero = 0;
	while (a > 0 && b > 0)
	{
		firstline(a);
		while (b > 1)
		{
			ft_putchar('\n');
			while (sero < b - 2)
			{
				midline(a);
				ft_putchar('\n');
				sero++;
			}
			lastline(a);
			break ;
		}
		ft_putchar('\n');
		break ;
	}
}
