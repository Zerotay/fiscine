#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));
int putnbr(int n)
{
	return (n*2);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int length = 5;

	for (int i = 0; i < 5; i++)
		printf("%d", *ft_map((tab+i), length, putnbr));
}
