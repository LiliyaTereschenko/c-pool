/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:27:00 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/27 13:05:16 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_time(int hour)
{
	if (hour > 0 && hour < 12)
	{
		printf("%d", hour);
		printf("%s", ".00 A.M.");
	}
	if (hour > 12 && hour < 24)
	{
		printf("%d", hour % 12);
		printf("%s", ".00 P.M.");
	}
	if (hour == 24 || hour == 0)
	{
		printf("%d", 12);
		printf("%s", ".00 A.M.");
	}
	if (hour == 12)
	{
		printf("%d", 12);
		printf("%s", ".00 P.M.");
	}
}

void	ft_takes_place(int hour)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_print_time(hour);
	printf("%s", " AND ");
	if (hour == 24)
		hour = 0;
	ft_print_time(hour + 1);
	printf("%c", '\n');
}
