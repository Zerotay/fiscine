#include<stdio.h>


void ft_putstr_non_printable(char *str);

int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    printf("\n");
    printf("Coucou\ntu vas bien ?");

}