/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 20:02:31 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/02 20:44:18 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int		ft_depth(t_btree *root, int counter)
{
	if (root == NULL)
		return (counter);
	return (ft_max(ft_depth(root->left, counter + 1),
			ft_depth(root->right, counter + 1)));
}

int		btree_level_count(t_btree *root)
{
	int counter;

	counter = 0;
	return (ft_depth(root, counter));
}
