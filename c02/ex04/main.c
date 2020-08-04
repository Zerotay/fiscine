#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char str[] = "sdf1";
    int a;

    ft_str_is_lowercase(str);

    a = ft_str_is_lowercase(str);

    printf("%d", a);

    char ztr[] = "25ss";

    ft_str_is_lowercase(ztr);

    a =  ft_str_is_lowercase(ztr);
    
    printf("%d", a);


}