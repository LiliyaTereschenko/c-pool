/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohirthe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:20:55 by ohirthe           #+#    #+#             */
/*   Updated: 2018/10/28 23:41:32 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int at_least(char **argv)
{
	int i;
	int j;
	int ammount;
	
	ammount = 0;
	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				ammount++;
			j++;
		}
		i++;
	}
	if (ammount >= 17)
		return (1);
	else
		return (0);
}

int	ft_preliminaries(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	if (argc == SIZE + 1)
	{
		i = 1;
		while ((i <= SIZE) && (ft_strlen(argv[i]) == SIZE))
		{
			j = 0;
			while ((j <= SIZE - 1) && (k == 0))
			{
				k = 1;
				if (((argv[i][j] >= '1') && (argv[i][j] <= '9'))
						|| (argv[i][j] == '.'))
					k = 0;
				j++;
			}
			i++;
			k = ((i == SIZE + 1) && (j == SIZE) && (k == 0)) ? 1 : 0;
		}
	}
	return (k);
}

int	ft_validate_params(int argc, char **argv)
{
	if ((ft_preliminaries(argc, argv) == 1) && (at_least(argv) == 1))
		return (1);
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
