/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:43:23 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/09 23:43:23 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(int **chess)
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (chess[i][j] == 5)
                write(1, &j, 1);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}
int checkok(int *chess, int j)
{
    if (chess[j] == 0)
        return (1);
    return (0);
}
void init(int **chess)
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (chess[i][j] != 5)
                chess[i][j] = 0;
            j++;
        }
        i++;
    }
}
void makecond(int **chess)
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
            while (chess[i][j] == 5 && n < 10 - i)
            {
                chess[i + n][j] = 3;
                chess[i + n][j - n] = 3;
                chess[i + n][j + n] = 3;
                n++;
            }            
            j++;
        }
        i++;
    }

}
void recur(int n, int **chess, int *answer)
{
    int j;

    if (n == 10)
    {
        print(chess);
        (*answer)++;
    }
    j = 0;
    while (j < 10)
    {
        makecond(chess);
        if (checkok(chess[n], j))
        {
            chess[n][j] = 5;
            makecond(chess);
            recur(n+1, chess, answer);
        }
        chess[n][j] = 0;
        init(chess);
        j++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int chess[10][10];
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
           chess[i][j] = 0;
           j++;
       }
       i++;
       j = 0;
   }
    n = 0;
    recur(n , chess, &answer);

    return (answer);
}