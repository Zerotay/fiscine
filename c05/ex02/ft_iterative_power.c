/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 23:10:14 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 13:20:09 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
   int	i;
   int	j;

   if (nb < 0)
	   return 0;
   if (nb == 0 && power == 0)
	   return 1;
   i = 0;
   j = 1;
   while (i < power)
   {
	   j *= nb;
	   i++;
   }
   return j;
}
