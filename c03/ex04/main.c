#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "Hello extra models dd";
	char to_find[] = "els";
	char *ptr = strstr(str, to_find);

	printf("%s", ptr);


}
