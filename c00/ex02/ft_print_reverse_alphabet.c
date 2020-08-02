/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:51:08 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/02 15:51:08 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_print_reverse_alphabet(void)
{
    char a;

    a = 'z';
    while (a >= 'a')
    {
        write(1, &a, 1);
        a--;
    }
}