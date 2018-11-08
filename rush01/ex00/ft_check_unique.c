/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_unique.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:25:18 by jgoyette          #+#    #+#             */
/*   Updated: 2018/10/28 23:23:52 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

int	ft_not_in_row(char digit, char **field, int index, int is_filled)
{
	int i;
	int y;
	int x;

	y = Y(index);
	x = X(index);
	i = 0;
	while (i < SIZE)
	{
		if (field[y][i] == digit)
		{
			if (is_filled && x == i)
			{
				i += 1;
				continue ;
			}
			return (0);
		}
		i += 1;
	}
	return (1);
}

int	ft_not_in_column(char digit, char **field, int index, int is_filled)
{
	int i;
	int x;
	int y;

	i = 0;
	x = X(index);
	y = Y(index);
	while (i < SIZE)
	{
		if (field[i][x] == digit)
		{
			if (is_filled && y == i)
			{
				i += 1;
				continue ;
			}
			return (0);
		}
		i += 1;
	}
	return (1);
}

int	ft_not_in_square(char digit, char **field, int index, int is_filled)
{
	int sq_x;
	int sq_y;

	sq_y = ZERO_POS(Y(index));
	while (sq_y < ZERO_POS(Y(index)) + 3)
	{
		sq_x = ZERO_POS(X(index));
		while (sq_x < ZERO_POS(X(index)) + 3)
		{
			if (digit == field[sq_y][sq_x])
			{
				if (is_filled && X(index) == sq_x && Y(index) == sq_y)
				{
					sq_x += 1;
					continue ;
				}
				return (0);
			}
			sq_x += 1;
		}
		sq_y += 1;
	}
	return (1);
}

int	ft_check_unique(char **field, int index)
{
	char	digit;
	int		x;
	int		y;

	x = X(index);
	y = Y(index);
	while (index < SIZE * SIZE)
	{
		digit = field[y][x];
		if (!(digit == '.'))
		{
			if (!(ft_not_in_row(digit, field, index, 1) &&
						ft_not_in_column(digit, field, index, 1) &&
						ft_not_in_square(digit, field, index, 1)))
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		index += 1;
		x = X(index);
		y = Y(index);
	}
	return (1);
}
