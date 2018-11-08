/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:05:30 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/01 19:34:21 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display(int fd, char *buf)
{
	int		ret;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str != '\0')
	{
		k++;
		str++;
	}
	return (k);
}

void	ft_error(char *av)
{
	write(2, "cat: ", 5);
	write(2, av, ft_strlen(av));
	write(2, ": ", 2);
	if (errno == 2)
		write(2, "No such file or directory\n", 26);
	if (errno == 13)
		write(2, "Permission denied\n", 18);
	if (errno == 21)
		write(2, "Is a directory\n", 15);
	if (errno == 9)
		write(2, "Bad file descriptor\n", 20);
	if (errno == 11)
		write(2, "Resource temporarily unavailable\n", 33);
	if (errno == 5)
		write(2, "Input/output error\n", 19);
	if (errno == 22)
		write(2, "Invalid argument\n", 17);
	if (errno == 27)
		write(2, "File too large\n", 15);
	if (errno == 36)
		write(2, "File name too long\n", 19);
}
