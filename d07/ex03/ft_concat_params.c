/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:10:11 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/25 16:29:04 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}

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

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = 1;
	while (i < argc)
	{
		len = len + ft_strlen(argv[i]) + 1;
		i++;
	}
	dest = (char*)malloc(sizeof(char) * len);
	i = 1;
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		i++;
	}
	dest[len + 1] = '\0';
	if (dest != NULL)
		return (dest);
	return (NULL);
}
