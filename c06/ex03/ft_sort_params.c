/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongguki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:05:12 by dongguki          #+#    #+#             */
/*   Updated: 2020/08/10 14:23:48 by dongguki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			compare(char *argv1, char *argv2)
{
	int		i;

	i = 0;
	while (argv1[i] || argv2[i])
	{
		if (argv1[i] > argv2[i])
			return (1);
		if (argv1[i] < argv2[i])
			return (0);
		i++;
	}
	return (0);
}
void print(int 
int			main(int argc, char **argv)
{
	int		j;
	char	*temp;
	int		k;

	j = 1;
	while (j < argc)
	{
		k = j + 1;
		while (k < argc)
		{
			if (compare(argv[j], argv[k]))
			{
				temp = argv[j];
				argv[j] = argv[k];
				argv[k] = temp;
			}
			k++;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		k = 0;
		while (argv[j][k])
			k++;
		write(1, &argv[j][0], k);
		write(1, "\n", 1);
		j++;
	}
}
