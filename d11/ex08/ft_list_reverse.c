/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:01:15 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/31 19:23:41 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_reverse(t_list **begin_list)
{
	t_list *rev;

	if (*begin_list)
	{
		ft_list_reverse(&(*begin_list)->next);
		rev = *begin_list;
	}
	*begin_list = rev;
}
