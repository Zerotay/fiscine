#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
    char str[] = "salut, coMMent tu vas ? 42moTs quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    for (int i = 0; !(str[i] == '\0'); i++)
    printf("%c", str[i]);
}