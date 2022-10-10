# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 17:01:32 by jturunen          #+#    #+#              #
#    Updated: 2021/09/04 18:08:19 by mbeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= rush-2
LIB			:= libft.a
OBJ			:= compare_rush.o ft_putchar.o putrush.o ft_putnbr.o ft_putstr.o \
			 	read_input.o main.o rush.o square.o rev_square.o
HEADIR		:= includes
RM 			:= /bin/rm -f
SRCS		:= ./srcs/compare_rush.c ./srcs/ft_putchar.c ./srcs/putrush.c \
			./srcs/ft_putnbr.c ./srcs/ft_putstr.c ./srcs/read_input.c \
			./srcs/main.c ./srcs/rush.c ./srcs/square.c ./srcs/rev_square.c
3_WS		:= -Wall -Werror -Wextra
C_W_LIB		:= -L. -lft -Wall -Werror -Wextra


.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME) $(LIB)
re: fclean all

$(NAME): $(LIB)
	gcc $(OBJ) $(C_W_LIB) -o $(NAME)

$(LIB):
	gcc -I $(HEADIR) $(3_WS) -c $(SRCS)
	ar rcs $(LIB) $(OBJ)