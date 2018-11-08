/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:57:20 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/31 16:16:01 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int k;

	k = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		k++;
	}
	return (k);
}
