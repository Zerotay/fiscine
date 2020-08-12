/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 23:18:32 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/12 23:19:43 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			checkbase(char *base)
{
	int		i;
	int		j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	j = i + 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] > 8 && base[i] < 14) || base[i] == 32)
			return (1);
		i++;
		j = i + 1;
	}
	return (0);
}

void		checkatoi(char *str, int *i, int *j)
{
	while ((str[*i] > 8 && str[*i] < 14) || str[*i] == 32)
	{
		(*i)++;
	}
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			(*j)++;
		(*i)++;
	}
}

void		lastletter(char *str, int *i, char *base)
{
	int		k;

	k = 0;
	while (str[*i])
	{
		while (base[k])
		{
			if (str[*i] == base[k])
				break ;
			k++;
		}
		if (base[k] == '\0')
			break ;
		(*i)++;
		k = 0;
	}
}

int			answer(char *str, int i, char *base, int length)
{
	int		k;
	int		b;
	int		fin;

	k = 0;
	b = 1;
	fin = 0;
	while (str[i - 1] != '+' && str[i - 1] != '-')
	{
		while (base[k])
		{
			if (str[i - 1] == base[k])
			{
				fin += (k * b);
				b *= length;
				break ;
			}
			k++;
		}
		if (base[k] == '\0')
			break ;
		k = 0;
		i--;
	}
	return (fin);
}

int			len(char *base_to)
{
	int		i;

	i = 0;
	while (base_to[i])
		i++;
	return (i);
}
