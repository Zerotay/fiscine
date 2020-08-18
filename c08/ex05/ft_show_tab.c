/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 21:49:11 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/18 20:05:14 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void		print(char *parstr)
{
	int		i;

	i = 0;
	while (parstr[i])
		i++;
	write(1, parstr, i);
	write(1, "\n", 1);
}

void		pr_num(int size)
{
	int		i;

	if (size < 10)
	{
		i = size + 48;
		write(1, &i, 1);
		return ;
	}
	i = size % 10 + 48;
	pr_num(size / 10);
	write(1, &i, 1);
}

void		ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		print(par[i].str);
		pr_num(par[i].size);
		write(1, "\n", 1);
		print(par[i].copy);
		i++;
	}
}
