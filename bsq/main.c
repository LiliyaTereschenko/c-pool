/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:03:26 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 21:07:11 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	read_map_from_input(void)
{
	char	*str;
	int		**map;

	str = ft_read_file(0);
	if (*str && check_input_map(str))
	{
		map = map_builder(str, check_line_count(str), check_width(str),
				return_params(str, 'o'));
		ft_finder(map, check_line_count(str), check_width(str), str);
	}
	else
		write(1, "map error\n", 10);
}

void	read_map_from_file(char *argv)
{
	int		fd;
	char	*str;
	int		**map;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(1, "map error\n", 10);
		return ;
	}
	str = ft_read_file(fd);
	if (check_input_map(str) == 0)
	{
		write(1, "map error\n", 10);
		return ;
	}
	else
	{
		map = map_builder(str, check_line_count(str),
				check_width(str), return_params(str, 'o'));
		ft_finder(map, check_line_count(str), check_width(str), str);
	}
	free(str);
	close(fd);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc <= 1)
		read_map_from_input();
	else
	{
		while (i < argc)
		{
			read_map_from_file(argv[i]);
			i++;
			if (i != argc)
				write(1, "\n", 1);
		}
	}
	return (0);
}
