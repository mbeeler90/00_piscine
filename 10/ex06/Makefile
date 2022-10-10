# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 09:14:29 by mbeeler           #+#    #+#              #
#    Updated: 2021/08/31 10:36:18 by mbeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = calculator

FLAGS = -Wall -Wextra -Werror -c -I 

all: $(NAME)

$(NAME):
	gcc $(FLAGS) head.h main06.c addition.c division.c doop.c minus.c \
	modular.c mult.c putnbr.c
	gcc *.o -o $(NAME)

.PHONY: all $(NAME) clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
