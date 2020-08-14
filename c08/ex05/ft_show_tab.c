/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 21:49:11 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/14 21:49:11 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par->str[i])
    {
        write(1, par->str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    write(1, par->size, 1);
    write(1, "\n", 1);
    i = 0;
    while (par->copy[i])
    {
        write(1, par->copy[i], 1);
        i++;
    }
    write(1, "\n", 1);
}