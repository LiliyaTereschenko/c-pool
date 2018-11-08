# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 14:21:12 by kkihn             #+#    #+#              #
#    Updated: 2018/11/01 18:08:08 by kkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAGS = -Wall -Wextra -Werror
FILES = ft_cat.c functions.c

all: $(NAME)

$(NAME):	
	gcc -I header.h $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f *.o 

fclean: clean
	rm -f $(NAME)
