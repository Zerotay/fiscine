#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
    char str[] = " sed 456 KIdonggu1000";

    ft_strupcase(str);

    for(int i = 0; !(str[i] == 0); i++)
    {
        printf("%c", str[i]);
    }
}