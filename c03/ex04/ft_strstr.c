/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:40:34 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/05 16:40:35 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		i[3];

	i[0] = -1;
	i[1] = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i[0]])
	{
		if (to_find[0] == str[i[0]])
		{
			while (to_find[i[1]])
			{
				if (to_find[i[1]] == str[i[0] + i[1]])
					i[1]++;
				else
					break ;
				if (to_find[i[1]] == '\0')
					i[2] = i[0];
			}
			i[1] = 0;
		}
	}
	if (i[1] == 0)
		return (0);
	return (&str[i[2]]);
}
