#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	char *nbr = "-2147483648";
	char *base_from = "0123456789";
	char *base_to = "0123456789";
	char *j = ft_convert_base(nbr, base_from, base_to);

		printf("%s", j);

}
