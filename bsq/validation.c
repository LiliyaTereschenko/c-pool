/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:40:15 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 17:54:22 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_input_map(char *str)
{
	if (check_first_line_and_symbols(str) == 0 || check_line_count(str) == 0 ||
			check_width(str) == 0)
		return (0);
	else
		return (1);
}

int		check_width(char *str)
{
	int width;
	int width_counter;

	width = 0;
	while (*(str - 1) != '\n')
		str++;
	while (*str != '\n')
	{
		width++;
		str++;
	}
	str++;
	while (*str != '\0')
	{
		width_counter = 0;
		while (*str != '\n')
		{
			width_counter++;
			str++;
		}
		if (width != width_counter)
			return (0);
		str++;
	}
	return (width);
}

int		check_line_count(char *str)
{
	int line_counter;
	int lines;

	line_counter = 0;
	lines = ft_atoi(str);
	while (*str != '\n')
		str++;
	str++;
	while (*str != '\0')
	{
		if (*str == '\n')
			line_counter++;
		str++;
	}
	if (lines != line_counter)
		return (0);
	else
		return (lines);
}

int		check_first_line_and_symbols(char *str)
{
	char	*legend[3];
	int		i;

	i = 0;
	if (ft_atoi(str) <= 0)
		return (0);
	else
		str = str + count_digits(ft_atoi(str));
	while (*str != '\n')
	{
		i++;
		str++;
	}
	if (i != 3)
		return (0);
	else
	{
		legend[0] = (str - 3);
		legend[1] = (str - 2);
		legend[2] = (str - 1);
		if (!(check_symbol(str, *legend[0], *legend[1], *legend[2])))
			return (0);
	}
	return (1);
}

int		check_symbol(char *str, char empty, char obstacle, char full)
{
	if (empty == obstacle || empty == full || obstacle == full)
		return (0);
	while (*str != '\0')
	{
		if (*str != obstacle && *str != empty && *str != '\n')
			return (0);
		str++;
	}
	return (1);
}
