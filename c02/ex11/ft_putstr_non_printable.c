/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:44:05 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 22:47:10 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	make16th(char str)
{
	int	a;
	int	b;

	a = (str / 16) % 16 + 48;
	b = str % 16 + 48;
	if (a > '9')
		a += 39;
	if (b > '9')
		b += 39;
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (str[i] < 32 || str[i] > 126)
		{
			make16th(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
