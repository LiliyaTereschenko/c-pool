/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:03:15 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/07 21:06:28 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 4096

int		ft_atoi(char *str);
int		count_digits(int d);
char	*ft_read_file(int fd);
char	*add_memory_concat_str(char *s1, char *s2);
int		ft_strlen(char *str);
int		check_width(char *str);
int		check_line_count(char *str);
int		check_first_line_and_symbols(char *str);
int		check_input_map(char *str);
int		**map_builder(char *str, int lines, int width, char obctacle);
void	ft_finder(int **arr, int len, int width, char *str);
char	return_params(char *str, char i);
void	print_solution(char *str, int size);
int		check_symbol(char *str, char empty, char obstacle, char full);
void	read_map_from_file(char *argv);
void	ft_extra(int i, int j, int **arr);
#endif
