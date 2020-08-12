#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[100] = "123456";
	char src[] = " 789123456";
	unsigned int size = 0;

	printf("%s %lu\n", dest, strlcat(dest, src, size));

	char sest[100] = "123456";
	char zrc[] = " 789123456";


	printf("%s %u", sest, ft_strlcat(sest, zrc, size));


}
