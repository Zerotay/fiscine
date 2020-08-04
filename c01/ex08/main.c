#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int tab[] = {4, 5, 1, 6, 8, 2, 1, 11, 7, 0};
    int size = 10 ;

    ft_sort_int_tab(tab, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }

}