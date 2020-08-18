#include "ft_string2.h"
#include "ft_string.h"
#include <unistd.h>

int ft_strcmp(char *a, char *b)
{
  int i;

  i = 0;
  while (a[i] && b[i])
  {
    if (a[i] != b[i])
    return (a[i] - b[i]);
    i++;
  }
  return (a[i] - b[i]);
}

char	*ft_strncpy(char *dest, char *src, int size)
{
	int i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*eraze_zero(char *str)
{
	int i;
  int j;

	i = 0;
	while (str[i] == '0' && str[i])
		i++;
  j = 0;
  while (str[i + j])
    str[j++] = str[i + j];
  str[j] = 0;
	return (str + i);
}

void  print_check_space(char *str)
{
  int i;
  int check;
  int size;

  i = -1;
  check = 0;
  size = ft_strlen(str) + 1;
  while (--size >= 0 && str[size] == ' ');
  str[size + 1] = 0;
  while (str[++i] == ' ');
  while (str[i])
  {
    if (str[i] != ' ')
    {
      write(1,&str[i],1);
      check = 0;
    }
    else if (check == 0)
      {
        check = 1;
        write(1,&str[i],1);
      }
    ++i;
  }
}
