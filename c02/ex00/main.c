#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    char dest[5];
    char src[] = "nopp";

    ft_strcpy(dest, src);

    write(1, dest, sizeof(src));
}