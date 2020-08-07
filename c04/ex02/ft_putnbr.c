/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:13:34 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/06 19:13:34 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int print(int nb)
{
    char i;

    if (nb < 10)
    {
        i = nb + 48;
        write(1, &i, 1);
        return (0);
    }
    i = nb % 10 + 48;
    nb /= 10;
    print(nb);
    write(1, &i, 1);
    return (0);
}

void ft_putnbr(int nb)
{
    char i;
    if(nb < 0)
    {
        i = nb % 10 * -1 + 48;
        nb /= -10;
        write(1, "-", 1);
        print(nb);
        write(1, &i, 1);
    }
    else
    print(nb);
    
}