/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 15:54:49 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/08 22:40:23 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (src[i] == '\0' || j == 1)
		{
			j = 1;
			dest[i] = '\0';
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
