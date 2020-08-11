/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:53:42 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/11 15:53:42 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void guide(int size, char **strs, char *sep, char **i, int *count)
{
    int j;
    int k;
    int seplen;

    j = 0;
    k = 0;
    seplen = 0;
    while (sep[seplen])
        seplen++;
    while (j < size)
    {
        k = 0;
        while (strs[j][k])
            k++;
        count += (k - 1);
        i[2 * j] = (char *)malloc(sizeof(char) * (k - 1));
        i[2 * j] = strs[j];
        if (j != 0)
        {
            i[2 * j - 1] = (char *)malloc(sizeof(char) * (seplen - 1));
            i[2 * j - 1] = sep;
        }
        j++;
    }
}

char *answers(int count, char **i, int size)
{
    char *answer;
    int j;
    int k;
    int l;

    answer = (char *)malloc(sizeof(char) * count);
    j = 0;
    l = 0;
    while (j < size * 2 - 1)
    {
        k = 0;
        while (i[j][k])
        {
            answer[l] = i[j][k];
            l++;
            k++;
        }
        j++;
    }
    answer[l] = 0;
    return (answer);
}
char        *ft_strjoin(int size, char **strs, char *sep)
{
    char    **i;
    int     seplen;
    int     count;
    char    *only;

    if (size <= 0)
    {
        only = (char *)malloc(sizeof(char));
        only[0] = 0;
        return (only);
    }
    seplen = 0;
    while (sep[seplen])
        seplen++;
    i = (char **)malloc(sizeof(char) * (size * 2 - 1));
    count = (seplen - 1) * (size - 1);
    guide(size, strs, sep, i, &count);
    return (answers(count, i, size));
}