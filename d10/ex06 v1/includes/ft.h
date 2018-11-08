/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:29:56 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/30 16:15:00 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_calc(int a, char c, int b);
int		ft_mod(int a, int b);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
#endif
