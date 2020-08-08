/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 20:54:42 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 19:53:05 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercase(char str)
{
	if (str >= 65 && str <= 90)
		return (1);
	return (0);
}

int		lowercase(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	return (0);
}

int		number(char str)
{
	if (str >= 48 && str <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == 0))
	{
		if (uppercase(str[i - 1]) != 1 && lowercase(str[i - 1]) != 1)
		{
			if (number(str[i - 1]) != 1 && lowercase(str[i]) == 1)
				str[i] -= 32;
		}
		if (uppercase(str[i - 1]) == 1 || lowercase(str[i - 1]) == 1)
		{
			if (uppercase(str[i]))
				str[i] += 32;
		}
		if (number(str[i - 1]))
		{
			if (uppercase(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
