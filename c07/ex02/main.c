#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
    int min = 50;
    int max = 10;
    int *range;

    ft_ultimate_range(&range, min, max);
    int i = 0;
    while (i < max - min)
    {
        printf("%d", range[i]);
        i++;
    }
}