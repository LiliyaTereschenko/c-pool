/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:37:30 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/01 19:31:24 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUFF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		if (open(argv[i], O_DIRECTORY) >= 0)
		{
			write(2, "cat: ", 5);
			write(2, argv[i], ft_strlen(argv[i]));
			write(2, ": Is a directory\n", 15);
			return (0);
		}
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			ft_error(argv[i]);
		else
			ft_display(fd, buf);
		close(fd);
		i++;
	}
	return (0);
}
