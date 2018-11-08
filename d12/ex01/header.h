/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:01:27 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/01 19:32:46 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUFF_SIZE 4096

void	ft_putstr(char *str);
void	ft_display(int fd, char *buf);
int		ft_strlen(char *str);
void	ft_error(char *av);
#endif
