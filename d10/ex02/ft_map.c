/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:00:51 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/29 16:38:06 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	i = 0;
	arr = (int*)malloc(sizeof(int) * (length));
	if (!arr)
		return (0);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
