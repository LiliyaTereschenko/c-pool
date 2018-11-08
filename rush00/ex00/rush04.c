/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:54:53 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/21 15:32:20 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first(int x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_putchar('A');
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y - 2)
	{
		i = 0;
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('B');
		j++;
		ft_putchar('\n');
	}
}

void	ft_last(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (y > 1)
	{
		ft_putchar('C');
		while (j < x - 2)
		{
			ft_putchar('B');
			j++;
		}
		if (x > 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		if (x == 1)
			ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_first(x);
	ft_middle(x, y);
	ft_last(x, y);
}
