/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:07:56 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/13 22:19:34 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int	i;

	while (1)
	{
		i = 2;
		while (i * i < nb)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if (i * i > nb)
			return (nb);
		nb++;
	}
}
