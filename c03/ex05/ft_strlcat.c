/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:45:55 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/05 18:56:59 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	dest[i] = src[j];
	while (i + j < size - 1 && src[j] && dest[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i = 0;
	while(dest[i])
		i++;
	return (i + 1);
}
