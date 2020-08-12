#include <string.h>

int		main(void)
{
	unsigned int a;
	char	*str;
	char	ch[20] = "hello world!";

	str = ch;

	a = strlcpy(str, "good", -1);
	for(int i=0;i<20;i++)
		printf("%c", ch[i]);
	return (0);
}
