/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:59:57 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/02 21:59:57 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void default(void)
{
      char a;

    a = '0';
    while (a <= '9')
    {
        write(1, &a, 1);
        a++;
    } 
}

void        ft_print_combn(int n)
{
      int num[n];
      int a;
        int i ;
      a = 0;

      while (a < n)
      {
          num[a] = 0;
         a++;
     }
     while (num[n] < '9')
     {
         write(1, &num[n], 1);
     }
  
}