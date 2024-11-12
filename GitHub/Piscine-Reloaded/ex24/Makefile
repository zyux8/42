# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:40:46 by ohaker            #+#    #+#              #
#    Updated: 2024/11/10 16:46:14 by ohaker           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HDR = ./includes/

all:	$(NAME)

$(NAME):
	cc $(CFLAGS) -c $(SRC) -I $(HDR)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all