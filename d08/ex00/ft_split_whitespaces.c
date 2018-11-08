/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:50:37 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/27 13:55:18 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words_counter(char *str)
{
	int i;
	int chr;

	if (*str == '\0')
		return (0);
	i = 0;
	chr = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			str++;
			chr = 0;
		}
		else
		{
			if (chr == 0)
				i++;
			chr = 1;
			str++;
		}
	}
	return (i);
}

char	**ft_allocate_memory(char *str, int words, int i, int j)
{
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (words + 1));
	if (*str == '\0' && ((arr[0] = 0) || 1))
		return (arr);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || (*str == ' ' || *str == '\t' || *str == '\n'))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!((*(str - 1) == ' ' || *(str - 1) == '\t' || *(str - 1) == '\n')))
		i++;
	arr[i] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		words;
	char	**arr;

	i = 0;
	j = 0;
	words = ft_words_counter(str);
	arr = ft_allocate_memory(str, words, 0, 0);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (i < words)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			while (*str == ' ' || *str == '\t' || *str == '\n')
				str++;
			arr[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else
			arr[i][j++] = *str++;
	}
	return (arr);
}
