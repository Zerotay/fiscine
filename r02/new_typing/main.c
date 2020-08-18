/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 06:29:28 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/16 06:43:10 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_parser.h"
#include "ft_string.h"
#include "ft_string2.h"
#define BUFSIZE 2000

int			main(int argc, char *argv[])
{
	t_dict	*data;
	char	*buf;
	char	*result;
	int		fd;
	int		size;

	buf = malloc(BUFSIZE);
	if (argc == 2 || argc == 3)
	{
		if ((fd = open(argc == 2 ? "numbers.dict" : argv[1], O_RDONLY)) == -1)
		{
			write(1, "Dict Error\n", 11);
			return (-1);
		}
		size = read(fd, buf, BUFSIZE);
		buf[size] = 0;
		close(fd);
		data = parse(buf);
		free(buf);
		result = ft_pnum(argv[argc - 1], data);
		print_check_space(result);
		return (0);
	}
	free_parse(data);
}
