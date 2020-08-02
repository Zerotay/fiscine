/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 18:17:06 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/02 18:17:06 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        behind(char a, char b);

void        ft_print_comb2(void)
{
    char first[2];

    first[0] = '0';
    first[1] = '0';

    while (first[0] <= '9')
    {
        while (first[1] <= '9')
        {
            behind(first[0], first[1]);
            first[1]++;
        }
        first[1] = '0';
        first[0]++;
    }
}

void        behind(char a, char b)
{
    char second[2];

    second[0] = a;
    second[1] = b + 1;

    while (second[0] <= '9')
    {
        while (second[1] <= '9')
        {
            write(1, &a, 1);
            write(1, &b, 1);
            write(1, " ", 1);
            write(1, &second[0], 2);
            if (!(a == '9' && b == '8'))
            {
            write(1, ", ", 2);
            }
            second[1]++;
        }
        second[0]++;
        second[1] = '0';
    }
}
