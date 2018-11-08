/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:31:46 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/31 18:07:30 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *for_free;

	while (*begin_list)
	{
		for_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(for_free);
	}
	*begin_list = NULL;
}
