/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 22:00:03 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/02 22:00:03 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void positive(int nb)
{
    char p[10];
    int a;
    int b;

    a = 1;
    b = 0;
    while (b < 10)
    {
        if (nb / a < 1)
        {
            break ;
        }
        p[b] = (nb / a) % 10 +48;
        a *= 10;
        b++;
    }
    b -= 1;
    while (b >=  0)
    {
        write(1, &p[b], 1);
        b--;
    }
}

void zero(void)
{
    write(1, "0", 1);
}

void negative(int nb)
{
    char p[10];
    int a;
    int b;

    a = 1;
    b = 0;
    while (b < 10)
    {
        if (nb / a > -1)
        {
            break ;
        }
        p[b] = (nb / a) % 10 * -1 + 48;
        a *= 10;
        b++;
    }
    b -= 1;
    write(1, "-", 1);
    while (b >=  0)
    {
        write(1, &p[b], 1);
        b--;
    }
}


void ft_putnbr(int nb)
{
   if (nb > 0)
   positive(nb);
   else if (nb == 0)
   zero();
   else
   negative(nb);  
}