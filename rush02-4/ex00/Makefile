# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 10:05:35 by ekantane          #+#    #+#              #
#    Updated: 2021/06/13 20:24:28 by mrantil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)
NAME = rush-2
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
SRC = $(SRC_DIR)main.c $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	/bin/rm -f $(NAME)
