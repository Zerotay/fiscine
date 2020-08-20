void	checking(char *str, int *i, int *j)
{
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		{
			(*j)++;
			(*i)++;
		}
		else
			(*i)++;
	}
}

int		ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	checking(str, &i, &j);
	while (str[i] >= '0' && str[i] <= '9')
	{
		k += str[i] - 48;
		i++;
		if (str[i] >= '0' && str[i] <= '9')
			k *= 10;
	}
	if (j % 2 == 1)
		k *= -1;
	return (k);
}

