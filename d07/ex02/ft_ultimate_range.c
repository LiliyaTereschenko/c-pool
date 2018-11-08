/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 21:19:54 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/25 21:20:03 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	array = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max || !array)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range)
		return (max - min);
	return (0);
}
