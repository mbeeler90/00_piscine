# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 10:03:59 by mbeeler           #+#    #+#              #
#    Updated: 2021/09/01 18:37:53 by mbeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror -c -I

HEAD = head.h

SRCS = ft_display_file.c putchar.c putstr.c str_len.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEAD) $(SRCS)
	gcc *.o -o $(NAME)

.PHONY: clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
