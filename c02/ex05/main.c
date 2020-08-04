#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
    char str[] = "A";
    int a;

    ft_str_is_uppercase(str);

    a = ft_str_is_uppercase(str);

    printf("%d", a);

    char ztr[] = "25ss";

    ft_str_is_uppercase(ztr);

    a =  ft_str_is_uppercase(ztr);
    
    printf("%d", a);


}