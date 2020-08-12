#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char dest[] = "hello world";
    char src[] = "fuck";
    unsigned int n = -1;

    printf("%d\n", ft_strlcpy(dest, src, n));
	write(1, dest, 10);

    write(1, "\n", 1);

    char cest[] = "hello world";
    char zrc[] = "fuck";

    printf("%lu\n", strlcpy(cest, zrc, n));
	write(1, cest, 10);
}
