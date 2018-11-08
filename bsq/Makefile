# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 12:49:56 by kkihn             #+#    #+#              #
#    Updated: 2018/11/07 21:12:50 by kkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
FILES = functions.c main.c read.c validation.c arrays.c ft_finder.c

all: $(NAME)

$(NAME):	
			gcc -I header.h $(FLAGS) -o $(NAME) $(FILES)

clean:
			rm -f *.o 

fclean: clean
			rm -f $(NAME)
re: fclean all
