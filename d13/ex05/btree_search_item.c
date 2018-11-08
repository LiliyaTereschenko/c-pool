/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 18:47:35 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/02 19:25:26 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == 0 || data_ref == 0)
		return (NULL);
	if (cmpf((root->item), data_ref) == 0)
		return (root->item);
	if (root->left)
		return (btree_search_item((root->left), data_ref, cmpf));
	if (root->right)
		return (btree_search_item((root->right), data_ref, cmpf));
	return (NULL);
}
