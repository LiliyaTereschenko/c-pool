/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:40:38 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/03 20:19:16 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
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
	if (d < 0)
		i = 1;
	while (d / 10 != 0)
	{
		i++;
		d = d / 10;
	}
	return (i + 1);
}

void	skip_spase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			while (str[i] != '\0')
			{
				str[i] = str[i + 1];
				i++;
			}
			str[i] = '\0';
			i = 0;
		}
		i++;
	}
}
