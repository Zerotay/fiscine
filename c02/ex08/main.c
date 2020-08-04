#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
    char str[] = " sed 456 KIdonggu1000";

    ft_strlowcase(str);

    for(int i = 0; !(str[i] == 0); i++)
    {
        printf("%c", str[i]);
    }
}