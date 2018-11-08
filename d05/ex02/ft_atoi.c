/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 21:50:59 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/24 11:36:30 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
