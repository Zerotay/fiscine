#include<string.h>
#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int main() 
{
	char s1[] = "arc\0dd";
	char s2[] = "abcdaa";
	unsigned int n = 10;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}

