#include "ft_stock_str.h"
#include <stdlib.h>

void ft_show_tab(struct s_stock_str *par);

int len(char *av)
{
    int i;

    i = 0;
    while (av[i])
        i++;
    return (i);
}

char *cpy(char *av)
{
    char *forcopy;
    int length;
    int i;

    length = len(av);
    forcopy = (char *)malloc(sizeof(char) * (length + 1));
    if (forcopy == 0)
        return (0);
    i = 0;
    while (av[i])
    {
        forcopy[i] = av[i];
        i++;
    }
    forcopy[i] = 0;
    return (forcopy);
}

void    dobyisfree(t_stock_str *answer, int i)
{
    int j;
    
    j = 0;
    while (j < i)
    {
        free(answer[j].copy);
        j++;
    }
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *answer;
    int         i;

    answer = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if(answer == 0)
        return (0);
    answer[ac].str = 0;
    i = 0;
    while (i < ac)
    {
        answer[i].size = len(av[i]);
        answer[i].str = av[i];
        answer[i].copy = cpy(av[i]);
        if (answer[i].copy == 0)
        {
            dobyisfree(answer, i);
            return (0);
        }
        i++;
    }
    return (answer);
}

int	main(void)
{
	int ac = 3;
	char **av = (char **)malloc(sizeof(char *) * ac);
	av[0] = "123456789";
	av[1] = "abcdefghij";
	av[2] = "a1s2d3f4";
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}