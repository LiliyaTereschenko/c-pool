/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:57:04 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/03 20:18:34 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		parse_atom(char **expr)
{
	int res;
	int i;

	if (**expr == '(')
	{
		(*expr)++;
		res = parse_summands(&(*expr));
		if (**expr == ')')
			(*expr)++;
		return (res);
	}
	res = ft_atoi(*expr);
	i = count_digits(res);
	while (i > 0)
	{
		(*expr)++;
		i--;
	}
	return (res);
}

int		parse_factors(char **expr)
{
	int		num1;
	int		num2;
	char	op;

	num1 = parse_atom(expr);
	while (5 > 0)
	{
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (num1);
		(*expr)++;
		num2 = parse_atom(expr);
		if (op == '/')
			num1 = num1 / num2;
		if (op == '*')
			num1 = num1 * num2;
		if (op == '%')
			num1 = num1 % num2;
	}
	return (num1);
}

int		parse_summands(char **expr)
{
	int		num1;
	int		num2;
	char	op;

	num1 = parse_factors(expr);
	while (5 > 0)
	{
		op = **expr;
		if (op != '-' && op != '+')
			return (num1);
		(*expr)++;
		num2 = parse_factors(expr);
		if (op == '-')
			num1 = num1 - num2;
		else
			num1 = num1 + num2;
	}
	return (num1);
}

int		eval_expr(char *str)
{
	skip_spase(str);
	return (parse_summands(&str));
}
