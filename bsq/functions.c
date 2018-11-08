/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:47:20 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 16:08:40 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	return_params(char *str, char i)
{
	int j;

	j = count_digits(ft_atoi(str));
	if (i == 'e')
		return (str[j]);
	else if (i == 'o')
		return (str[j + 1]);
	else if (i == 'f')
		return (str[j + 2]);
	else
		return ('0');
}

int		ft_atoi(char *str)
{
	int res;
	int negative;

	if (!str)
		return (0);
	res = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
		negative = 1;
	else
		negative = 0;
	if (negative || *str == '+')
		str++;
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
			break ;
		res = res * 10 + (*str - '0');
		str++;
	}
	if (negative)
		return (-res);
	else
		return (res);
}

int		count_digits(int d)
{
	int i;

	i = 0;
	if (d <= 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	else
	{
		while (d / 10 != 0)
		{
			i++;
			d = d / 10;
		}
		return (i + 1);
	}
}
