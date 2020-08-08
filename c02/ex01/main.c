#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char dest[] = "hello world";
    char src[] = "fuck";
    unsigned int n = 2;

    ft_strncpy(dest, src, n);

    write(1, dest, 8);

    write(1, "\n", 1);

    char cest[] = "hello world";
    char zrc[] = "fuck";

    strncpy(cest, zrc, n);
    write(1, cest, 8);


}
