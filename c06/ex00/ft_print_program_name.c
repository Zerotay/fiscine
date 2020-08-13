/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <dongguki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 01:18:01 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/13 22:25:22 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;

	i = argc;
	i = 0;
	while (argv[0][i])
		i++;
	write(1, argv[0], i);
	write(1, "\n", 1);
}
