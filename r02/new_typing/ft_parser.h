/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 04:49:32 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/16 07:13:04 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

typedef struct	s_dict
{
	char	**key;
	int		key_len;
	char	**value;
}				t_dict;
t_dict			*parse(char *str);
void	free_parse(t_dict *data);
char	*ft_pnum(char *num, t_dict *lib);
char	*ft_punit(int max, t_dict *data, char *result);
#endif
