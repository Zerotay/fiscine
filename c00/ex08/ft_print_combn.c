/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:59:57 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/03 18:56:37 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_print_combn(int n)
{
      int num[10];
      int a;

      a = 0;

      while (a < n)
      {
          num[a] = a + '0';
         a++;
     }
	  write(1, &num[0], n);

	i= n - 1;
	int in[10] = {num[0], num[1], num[2] ... } ;
	while (i == 0)
	{
	     while (in[i] < num[i] + 10 - n )
		 {
			 in[i]++;
		 }
	 i--;
	}
	while (n ==0)
	{
	while (num[n-1] <= in[n-1])
	{
		write(1, &num[0], n);
		num[n-1]++;
	}
	n--;
	}
}
