/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:26:14 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 19:43:19 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
