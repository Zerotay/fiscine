#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

int check(char *text)
{
	int i = 0;

	while (text[i])
	{
		if (text[i] == 'm')
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char *tab[] = {"of", "char", "main"};
	
	printf("%d",ft_any(tab, check));
}

