/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:29:04 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 16:10:51 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**map_builder(char *str, int lines, int width, char obstacle)
{
	int **map;
	int i;
	int j;

	i = 0;
	while (*str != '\n')
		str++;
	str++;
	map = (int**)malloc(sizeof(int*) * (lines + 1));
	while (*str != '\0')
	{
		j = 0;
		map[i] = (int*)malloc(sizeof(int) * (width + 1));
		while (*str != '\n')
		{
			map[i][j++] = (*str == obstacle) ? 0 : 1;
			str++;
		}
		map[i++][j] = 0;
		str++;
	}
	map[i] = (int*)malloc(sizeof(int) * (j + 1));
	while (j >= 0)
		map[i][j--] = 0;
	return (map);
}
