#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char dest[] = "hello world ";
    char src[] = "123456789";
    unsigned int n = 5;

    ft_strncpy(dest, src, n);

    write(1, dest, 12);

    write(1, "\n", 1);

    char cest[] = "hello world ";
    char zrc[] = "123456789";

    strncpy(cest, zrc, n);
    write(1, cest, 12);


}
