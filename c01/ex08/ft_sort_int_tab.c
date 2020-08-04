/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:49:13 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/04 11:49:13 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
    int save;
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < size)
    {
        save = tab[i];
        while(j < size)
        {
            if (tab[i] > tab[j])
            {
                tab[i] = tab[j];
                tab[j] = save;
                save = tab[i];
            }
            j++;
        }
        i++;
        j = i;
    }
}