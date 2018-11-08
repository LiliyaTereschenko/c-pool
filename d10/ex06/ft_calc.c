/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:58:40 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/30 16:29:12 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_calc(int a, char c, int b)
{
	int (*f[5])(int, int);
	int operator;

	if (c == '+')
		operator = 0;
	if (c == '-')
		operator = 1;
	if (c == '*')
		operator = 2;
	if (c == '/')
		operator = 3;
	if (c == '%')
		operator = 4;
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	return (f[operator](a, b));
}
