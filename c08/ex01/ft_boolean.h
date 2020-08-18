/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:45:55 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/18 19:48:59 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H

# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0

# define EVEN check

typedef int	t_bool;

t_bool		check(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	else
		return (0);
}

#endif
