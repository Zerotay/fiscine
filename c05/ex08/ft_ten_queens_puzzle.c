/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:43:23 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/12 21:08:58 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int g_chess[10][10];

void print(int *g_chess[])
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (g_chess[i][j] == 5)
                write(1, &j, 1);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}
int checkok(int g_chess[], int j)
{
    if (g_chess[j] == 0)
        return (1);
    return (0);
}
void init(int *g_chess[])
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (g_chess[i][j] != 5)
                g_chess[i][j] = 0;
            j++;
        }
        i++;
    }
}
void makecond(int *g_chess[])
{
    int i;
    int j;
    int n;

    i = 0;
    j = 0;
    while (i < 10)
    {
        while (j < 10)
        {
            n = 1;
            while (g_chess[i][j] == 5 && n < 10 - i)
            {
                g_chess[i + n][j] = 3;
                g_chess[i + n][j - n] = 3;
                g_chess[i + n][j + n] = 3;
                n++;
            }            
            j++;
        }
        i++;
    }

}
void recur(int n, int *g_chess[], int *answer)
{
    int j;

    if (n == 10)
    {
        print(g_chess);
        (*answer)++;
    }
    j = 0;
    while (j < 10)
    {
        makecond(g_chess);
        if (checkok(g_chess[n], j))
        {
            g_chess[n][j] = 5;
            makecond(g_chess);
            recur(n+1, g_chess, answer);
        }
        g_chess[n][j] = 0;
        init(g_chess);
        j++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int i;
    int j;
    int n;
    int answer;

   i = 0;
   j = 0;
   answer = 0;
   while (i < 10)
   {
       while (j < 10)
       {
           g_chess[i][j] = 0;
           j++;
       }
       i++;
       j = 0;
   }
    n = 0;
    recur(n , g_chess, &answer);

    return (answer);
}
