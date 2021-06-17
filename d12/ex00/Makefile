NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/
SRC = ./srcs/
SRC_FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_putnbr.c $(SRC)ft_strlen.c $(SRC)main.c $(SRC)ft_argc.c

all:
	gcc $(FLAGS) -o $(NAME) -I $(HEADER) $(SRC_FILES)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

