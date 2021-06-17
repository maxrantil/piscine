# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 10:57:29 by ralve             #+#    #+#              #
#    Updated: 2021/06/15 17:53:14 by mrantil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #

NAME = bsq

SRCS = ./srcs/main.c ./srcs/ft_change.c

INCL  = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCL) -o $(NAME) $(SRCS)

clean:
	rm -f 

fclean: clean
	rm -f ./$(NAME)

re: fclean all
