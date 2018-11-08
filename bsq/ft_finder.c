/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:39:46 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 18:28:51 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int g_i = 0;
int g_j = 0;

void	ft_finder(int **arr, int len, int width, char *str)
{
	int j;
	int i;

	i = len - 1;
	while (i >= 0)
	{
		j = width - 1;
		while (j >= 0)
		{
			ft_extra(i, j, arr);
			j--;
		}
		i--;
	}
	print_solution(str, arr[g_i][g_j]);
}

void	print_solution(char *str, int size)
{
	int		i;
	int		j;
	char	full;

	i = 0;
	j = 0;
	full = return_params(str, 'f');
	while (*(str - 1) != '\n')
		str++;
	while (*str != '\0')
	{
		if (i >= g_i && i <= g_i + size - 1 && j >= g_j && j <= g_j + size - 1)
		{
			write(1, &full, 1);
		}
		else
			write(1, &(*str), 1);
		if (*str == '\n')
		{
			i++;
			j = -1;
		}
		str++;
		j++;
	}
}

void	ft_extra(int i, int j, int **arr)
{
	int min;

	if (arr[i][j] != 0)
	{
		min = arr[i][j + 1];
		if (arr[i + 1][j] < min)
			min = arr[i + 1][j];
		if (arr[i + 1][j + 1] < min)
			min = arr[i + 1][j + 1];
		arr[i][j] = min + arr[i][j];
		if (arr[i][j] >= arr[g_i][g_j])
		{
			g_i = i;
			g_j = j;
		}
	}
}
