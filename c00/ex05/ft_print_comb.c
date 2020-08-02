/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 16:11:04 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/02 16:11:04 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';

    while (a < '8')
    {
        b = a + 1;
        while (b < '9')
        {
            c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a == '7' && b == '8' && c == '9')
                {
                    break ;
                }
                write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}
