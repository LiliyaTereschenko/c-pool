/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 11:47:57 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/01 19:39:07 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "File name missing.\n", 19);
			return (0);
		}
		if (fd)
			ft_display(fd, buf);
		close(fd);
	}
	return (0);
}
