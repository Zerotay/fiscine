/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:40:34 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 21:22:26 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		i[2];
	int		j;

	i[0] = 0;
	j = 0;
	while (str[i[0]])
	{
		while (to_find[j])
		{
			if (to_find[j] == str[i[0] + j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			i[1] = i[0];
			break ;
		}
		j = 0;
		i[0]++;
	}
	if (j == 0)
		return (0);
	return (&str[i[1]]);
}
