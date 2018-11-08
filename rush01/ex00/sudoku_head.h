/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_head.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:05:32 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/28 23:41:08 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_HEAD_H
# define SUDOKU_HEAD_H

# include <stdlib.h>
# include <unistd.h>
# define SIZE 9
# define X(index) (index % SIZE)
# define Y(index) (index / SIZE)
# define ZERO_POS(x) ((x / 3) * 3)

char	**ft_init_field(char **params);
int		ft_check_complete(char **field);
int		ft_validate_params(int argc, char **argv);
int		ft_solve_sudoku(char **field, int index);
void	ft_print(char **field);
int		ft_check_unique(char **field, int index);
int		ft_not_in_row(char digit, char **field, int index, int is_filled);
int		ft_not_in_column(char digit, char **field, int index, int is_filled);
int		ft_not_in_square(char digit, char **field, int index, int is_filled);
#endif
