<<<<<<< HEAD
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 10:05:35 by ekantane          #+#    #+#              #
#    Updated: 2021/06/12 10:05:37 by ekantane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)
NAME = rush-2
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
FILES = 
SRC = $(SRC_DIR)ft_atoi.c $(SRC_DIR)ft_putchar.c $(SRC_DIR)main.c $(SRC_DIR)rush00.c

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	/bin/rm -f $(NAME)

re: fclean all