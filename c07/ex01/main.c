#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int min = 5;
	int max = 10;

	int i = 0;
	while (i < max - min)
	{
		printf("%d", ft_range(min, max)[i]);
		i++;
	}
}
