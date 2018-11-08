/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 22:44:50 by jgoyette          #+#    #+#             */
/*   Updated: 2018/10/28 23:23:07 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

int	ft_solve_sudoku(char **field, int index)
{
	char	digit;
	int		x;
	int		y;

	digit = '1';
	x = X(index);
	y = Y(index);
	if (index == SIZE * SIZE)
		return (1);
	if (field[y][x] != '.')
		return (ft_solve_sudoku(field, index + 1));
	while (digit <= '9')
	{
		if (ft_not_in_row(digit, field, index, 0) &&
				ft_not_in_column(digit, field, index, 0) &&
				ft_not_in_square(digit, field, index, 0))
		{
			field[y][x] = digit;
			if (ft_solve_sudoku(field, index + 1))
				return (1);
		}
		digit += 1;
	}
	field[y][x] = '.';
	return (0);
}
