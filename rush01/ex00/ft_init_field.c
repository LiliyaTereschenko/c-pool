/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_field.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:36:08 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/28 22:30:32 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

char	**ft_init_field(char **params)
{
	char	**field;
	int		i;

	i = 0;
	field = (char**)malloc(sizeof(char*) * (SIZE + 1));
	while (i < SIZE)
	{
		field[i] = (char*)malloc(sizeof(char) * (SIZE + 1));
		i++;
	}
	i = 1;
	while (i < (SIZE + 1))
	{
		field[i - 1] = params[i];
		i++;
	}
	return (field);
}
