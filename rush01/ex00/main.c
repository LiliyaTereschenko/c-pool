/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:11:27 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/28 23:40:23 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

int		main(int argc, char **argv)
{
	char	**field;
	int		index;

	index = 0;
	if (!ft_validate_params(argc, argv))
		return (0);
	field = ft_init_field(argv);
	if (!ft_check_unique(field, index))
		return (0);
	ft_solve_sudoku(field, 0);
	if (!ft_check_complete(field))
		return (0);
	ft_print(field);
	return (0);
}
