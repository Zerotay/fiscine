/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:07:56 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 11:42:35 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int	i;

	while (1)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if (i == nb)
			return (nb);
		nb++;
	}
}
