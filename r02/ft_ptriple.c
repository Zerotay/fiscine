#include "ft_parser.h"
#include "ft_string.h"
#include "ft_string2.h"
#include "ft_ptriple.h"
#include <unistd.h>
#include <stdlib.h>


int	ft_ptriple(dict *data, char *triple, int size, char **result) // 아무것도 안찍을때 0 반환
{
	char buf[4];
  int i_c[2];
  char *temp;

  i_c[0] = 0;
  i_c[1] = 0;
  if (size >= 3 && triple[0] != '0')
  {
        ft_strncpy(buf,triple,1);
        *result = ft_putstr(findvalue(data,buf + (i_c[1]++) * 0), *result);
        *result = ft_putstr(findvalue(data,"100" + (i_c[1]++) * 0), *result) + (i_c[0]++) * 0;
  }
  ft_strncpy(buf,triple + i_c[0], size - i_c[0]);
  eraze_zero(buf);
  if(temp = findvalue(data,buf))
    *result = ft_putstr(temp + (i_c[1]++) * 0, *result);
  else if(buf[0] != 0)
  {
    buf[0] = triple[0 + i_c[0]];
    ft_strncpy(buf + 1, "0", 1);
    *result = ft_putstr(findvalue(data, buf + (i_c[1]++) * 0), *result) + (i_c[0]++) * 0;
    ft_strncpy(buf,triple + i_c[0], 1);
    *result = ft_putstr(findvalue(data,buf + (i_c[1]++) * 0), *result);
  }
	return (i_c[1]);
}

char	*findvalue(dict *data,char *key)
{
	int i;

	i = 0;
	while(data[i].key)
	{
		if (ft_strcmp(*data[i].key,key) == 0)
			return (*data[i].value);
		i++;
	}
	return 0;
}
