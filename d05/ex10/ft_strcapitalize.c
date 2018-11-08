/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:28:40 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/23 19:05:31 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= 0 && str[i - 1] <= 47)
				str[i] = str[i] - 32;
			if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] = str[i] - 32;
			if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] = str[i] - 32;
			if (str[i - 1] >= 123 && str[i - 1] <= 127)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
