/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:54:53 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/21 15:06:34 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first(int x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_putchar('o');
	while (j < x - 2)
	{
		ft_putchar('-');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('o');
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
		ft_putchar('|');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('|');
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
		ft_putchar('o');
		while (j < x - 2)
		{
			ft_putchar('-');
			j++;
		}
		if (x > 1)
		{
			ft_putchar('o');
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
