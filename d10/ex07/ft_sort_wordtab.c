/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:31:53 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/30 19:03:00 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*swap;

	swap = tab[0];
	i = 0;
	while (tab[i] != '\0')
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}
