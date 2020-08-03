#include<unistd.h>
#include<stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = 8;
	int i;

	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
