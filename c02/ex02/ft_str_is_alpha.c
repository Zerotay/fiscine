/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:45:44 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 19:39:35 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			break ;
		if (str[i] < 65)
			return (0);
		if (str[i] > 90 && str[i] < 97)
			return (0);
		if (str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
