/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:37:42 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/03 22:20:28 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int		a;
	int		count;
	int		ch;

	count = 0;
	while (count < size - 1)
	{
		ch = 0;
		a = tab[0];
		while (ch < size - 1 - count)
		{
			tab[ch] = tab[ch + 1];
			ch++;
		}
		tab[size - count - 1] = a;
		count++;
	}
}
