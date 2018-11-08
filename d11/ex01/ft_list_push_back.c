/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:04:04 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/31 15:54:40 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *current;

	current = *begin_list;
	new = ft_create_elem(data);
	if (current == 0)
		*begin_list = new;
	else
	{
		while (current->next != 0)
			current = current->next;
		current->next = new;
	}
}
