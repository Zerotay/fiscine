#include<stdio.h>


void ft_putstr_non_printable(char *str);

int main()
{
    char str[] = "Coucou\vtu vas bien ?";
    ft_putstr_non_printable(str);
   printf("-----------------------");
    printf("Coucou\vtu vas bien ?");

}
