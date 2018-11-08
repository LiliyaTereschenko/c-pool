/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:07:12 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/30 11:49:30 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_asend(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_desend(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (f(tab[0], tab[1]) < 0)
		return (ft_check_asend(tab, length, f));
	if (f(tab[0], tab[1]) > 0)
		return (ft_check_desend(tab, length, f));
	if (f(tab[0], tab[1] == 0))
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (ft_check_asend(tab, length, f));
			else if (f(tab[i], tab[i + 1]) > 0)
				return (ft_check_desend(tab, length, f));
			i++;
		}
	}
	return (1);
}
