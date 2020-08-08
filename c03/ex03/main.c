#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[100] = "fuck";
	char src[] = " yall!";
	unsigned int nb = 10;

	printf("%s\n", strncat(dest, src, nb));

	char sest[100] = "fuck";
	char zrc[] = " yall!";

	printf("%s\n", ft_strncat(sest, zrc, nb));
}

