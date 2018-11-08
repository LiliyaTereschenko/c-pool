/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 21:02:05 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/19 21:29:23 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
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

char	*ft_strrev(char *str)
{
	char	i;
	int		k;
	int		q;

	q = 0;
	k = ft_strlen(str);
	while (q <= k / 2)
	{
		i = str[q];
		str[q] = str[k - q - 1];
		str[k - q - 1] = i;
		q++;
	}
	return (str);
}
