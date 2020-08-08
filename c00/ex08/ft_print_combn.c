/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:59:57 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 20:30:44 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n)
{
    char a[9];
    int i;

    i = 0;
    while (i < n)
    {
        a[i] = i + '0';
        i++;
    }
    write(1, a, n);
    while(1)
    {
        i = n - 1;
        while (a[i] == '9' - n + i + 1)
            i--;
        a[i]++;
        while (++i< n):
            a[i] = a[i - 1] + 1;
        write(1, a, n);
		write(1, ", ", 2);
        if (a[0] == 10 - n + '0')
        break ;
    }
}
