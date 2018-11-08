/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:43:36 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/27 14:15:31 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int					ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str != '\0')
	{
		k++;
		str++;
	}
	return (k);
}

char				*ft_strdup(char *src)
{
	char *dest;

	dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par	*stk;

	if (!(stk = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stk[i].size_param = j;
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		//stk[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stk[i].str = 0;
	return (stk);
}
