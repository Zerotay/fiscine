#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(void)
{
	char str[] = " ";
	char charset[11] = "123";
	char **result = ft_split(str, charset);
	for(int i = 0; result[i]; i++)
		printf("%s\n", result[i]);
	return 0;
}
