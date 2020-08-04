#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[] = "";
    int a;

    ft_str_is_printable(str);

    a = ft_str_is_printable(str);

    printf("%d", a);

    char ztr[] = "25ss";

    ft_str_is_printable(ztr);

    a =  ft_str_is_printable(ztr);
    
    printf("%d", a);


}