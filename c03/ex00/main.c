#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "AZC";
	char s2[] = "ABCD";

	printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
