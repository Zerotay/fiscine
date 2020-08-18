/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:23:11 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/16 07:10:38 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

int		ft_nline(char *str);
char	*ft_strcpy(char **dest, char *src, int *size);
char	*ft_skip_space(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str, char *dest);
#endif
