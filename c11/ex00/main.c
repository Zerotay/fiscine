#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr(int n)
{
	printf("%d", n);
}
int main()
{
	int length = 5;
	int tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, length, ft_putnbr);
}
