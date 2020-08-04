#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char dest[] = "hello world";
    char src[] = "fuck";
    unsigned int n = 8;

    ft_strlcpy(dest, src, n);

    write(1, dest, n);

    write(1, "\n", 1);

    char cest[] = "hello world";
    char zrc[] = "fuck";
    n = 8;

    strncpy(cest, zrc, 8);
    write(1, cest, n);
}
