/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:11:07 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/30 17:33:09 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_validate(char sign, int b)
{
	if (sign == '/' && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);		
	}
	if (sign == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	sign;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		if ((argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || 
					argv[2][0] == '/' || argv[2][0] == '%') &&
		  			argv[2][1] == '\0')
			sign = argv[2][0];
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
		b = ft_atoi(argv[3]);
		if (ft_validate(sign, b) == 0)
			return (0);
		ft_putnbr(ft_calc(a, sign, b));
		write(1, "\n", 1);
	}
	return (0);	
}
