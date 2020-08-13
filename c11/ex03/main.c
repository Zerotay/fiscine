#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int check(char *test)
{
	int i = 0;

	while (test[i])
	{
		if(test[i] == 'm')
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	int length = 5;
	char **tab = (char **)malloc(sizeof(char*) * length);

	tab[0] = "official";
	tab[1] = "manual";
	tab[2] = "superman";
	tab[3] = "";
	tab[4] = "shubal";
	printf("%d", ft_count_if(tab, length, check));
}
