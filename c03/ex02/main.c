#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[100] = "fuck";
	char src[] = " yall!";

	strcat(dest, src);
	printf("%s\n",dest);

	char sest[100] = "fuck";
	char zrc[] = " yall!";
	

	ft_strcat(sest, zrc);
	printf("%s", sest);
}

