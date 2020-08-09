/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:26:21 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/09 14:26:21 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (nb * ft_recursive_power(nb, power - 1));
}