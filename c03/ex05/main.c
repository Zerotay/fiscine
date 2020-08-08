#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[100] = "fuc12322k";
	char src[] = " yall123";
	unsigned int size = 5;

	strlcat(dest, src, size);

	printf("%s %lu\n", dest, strlcat(dest, src, size));

	char sest[100] = "fu123c22k";
	char zrc[] = " yall123";

	ft_strlcat(sest, zrc, size);

	printf("%s %u", sest, ft_strlcat(sest, zrc, size));


}
