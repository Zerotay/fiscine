#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "dfdfdddeghtntnhello hello";
	char to_find[] = "hel";
	char *ptr = strstr(str, to_find);

	printf("%s\n", ptr);
	printf("%s", ft_strstr(str, to_find));


}
