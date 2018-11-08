/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:55:34 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/20 17:18:59 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
	    	return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;
	int flag;

	flag = 0;
	i = nb + 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (flag != 1)
	{
		if (ft_is_prime(i) == 0)
			i++;
		else 
			flag = 1;;
	}
	return (i);
}
