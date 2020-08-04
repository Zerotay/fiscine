#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str[] = "s";
    int a;

    ft_str_is_alpha(str);

    a = ft_str_is_alpha(str);

    printf("%d", a);

    char ztr[] = "";

    ft_str_is_alpha(ztr);

    a =  ft_str_is_alpha(ztr);
    
    printf("%d", a);


}