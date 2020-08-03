/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:13:15 by hyopark           #+#    #+#             */
/*   Updated: 2020/08/01 22:08:01 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		putv(int i, int j, int x, int y);

void		puth(int i, int j, int x, int y);

void		pute(int i, int j, int x, int y);

void		rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (!(x == 0 || y == 0))
	{
		while (i < y)
		{
			while (j < x)
			{
				if (i == 0)
					putv(i, j, x, y);
				else if (i == y - 1)
					pute(i, j, x, y);
				else
					puth(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 0;
		}
		break ;
	}
}

void		putv(int i, int j, int x, int y)
{
	if (j == 0)
		ft_putchar('/');
	else if (j == x - 1)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void		puth(int i, int j, int x, int y)
{
	if (j == 0)
		ft_putchar('*');
	else if (j == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void		pute(int i, int j, int x, int y)
{
	if (j == 0)
		ft_putchar('\\');
	else if (j == x - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
}
