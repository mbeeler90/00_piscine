# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 10:17:50 by mbeeler           #+#    #+#              #
#    Updated: 2021/09/01 08:32:56 by mbeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCH = ./includes/

SRCC = ./srcs/

FLAGS = -Wall -Wextra -Werror -c -I $(SRCH)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCC)ft_putchar.c $(SRCC)ft_putstr.c \
	$(SRCC)ft_strcmp.c $(SRCC)ft_strlen.c $(SRCC)ft_swap.c
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY: clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
