# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 11:56:12 by kkihn             #+#    #+#              #
#    Updated: 2018/10/29 15:57:53 by kkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -c

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	          ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: libft.a

libft.a:
	gcc -I./includes $(FLAGS) $(SRC)
	ar rc libft.a $(OFILES)	

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f libft.a

re: fclean all

