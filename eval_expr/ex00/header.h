/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:36:42 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/03 20:18:22 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		count_digits(int d);
void	skip_spase(char *str);
int		eval_expr(char *str);
int		parse_summands(char **expr);
int		parse_factors(char **expr);
int		parse_atom(char **expr);
#endif
