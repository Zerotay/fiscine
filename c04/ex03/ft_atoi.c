/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:45:04 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 19:57:30 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		k *= 10;
		i++;
	}
	k /= 10;
	if (j % 2 == 1)
		k *= -1;
	return (k);
}
