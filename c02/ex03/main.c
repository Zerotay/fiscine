#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
    char str[] = "";
    int a;

    ft_str_is_numeric(str);

    a = ft_str_is_numeric(str);

    printf("%d", a);

    char ztr[] = "25ss";

    ft_str_is_numeric(ztr);

    a =  ft_str_is_numeric(ztr);
    
    printf("%d", a);


}