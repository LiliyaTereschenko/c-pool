/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:14:20 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/31 18:46:05 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int k;

	k = 0;
	if (!begin_list)
		return (NULL);
	while (k < nbr && begin_list)
	{
		begin_list = begin_list->next;
		k++;
	}
	if (k < nbr)
		return (NULL);
	else
		return (begin_list);
}
