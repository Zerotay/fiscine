/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 20:00:04 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/20 20:00:04 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft.h"

int check(char **op)
{
    if (op[2][1] != 0)
    {
        write(1, "0", 1);
        return (1);
    }
    if (op[2][0] == '+' || op[2][0] == '-' || op[2][0] == '*' || op[2][0] == '/' || op[2][0] == '%')
        return (0);
    write(1, "0", 1);
    return (1);
}

int calculate(int a, int b, char op)
{
    if (op == '+')
        return (a + b);
    if (op == '-')
        return (a - b);
    if (op == '*')
        return (a * b);
    if (op == '/')
        return (a / b);
    if (op == '%')
        return (a % b);
    return (0);
}

void print(int answer)
{
    int temp;

    if (answer < 10)
        {
            temp = answer + 48;
            write(1, &temp, 1);
            return ;
        }
    temp = answer % 10 + 48;
    print(answer / 10);
    write (1, &temp, 1);
}


int main(int argc, char **argv)
{
    int val1;
    int val2;
    int answer;

    if (argc != 4)
        return (0);
    val1 = ft_atoi(argv[1]);
    val2 = ft_atoi(argv[3]);
    if (check(argv))
        return (0);
    if (val2 == 0 && argv[2][0] == '/')
    {
        write(1, "Stop : division by zero\n", 24);
        return (0);
    }
    if (val2 == 0 && argv[2][0] == '%')
    {
        write(1, "Stop : modulo by zero\n", 22);
        return (0);
    }
    answer = calculate(val1, val2, argv[2][0]);
    print(answer);
    return (0);
}