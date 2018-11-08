/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:26:09 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/26 16:39:18 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
//	char	**tab;
}					t_stock_par;
char				**ft_split_whitespaces(char *str);
char				*ft_strcpy(char *dest, char *src);
int					ft_strlen(char *str);
char				*ft_strdup(char *src);
void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
#endif
