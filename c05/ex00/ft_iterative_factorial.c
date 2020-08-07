/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 22:35:33 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/07 22:35:33 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    i = 1;
    while (nb > 1)
    {
        i *= nb;
        nb--;
    }
    return (i);
}