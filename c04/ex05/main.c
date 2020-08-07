#include<stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
    char str[] = "          -+-+-+ww1oruweor";
    char base[] = "qwertyuiop";

    printf("%d", ft_atoi_base(str, base));
}