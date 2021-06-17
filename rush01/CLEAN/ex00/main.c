/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:06:55 by pskytta           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/06 15:30:43 by pskytta          ###   ########.fr       */
=======
/*   Updated: 2021/06/06 14:55:03 by mrantil          ###   ########.fr       */
>>>>>>> e613930a6640dd1605b2d605d1c0012ea3e754e8
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"
#define N 9
<<<<<<< HEAD
#include "sudoku.h"
=======

void	grid_print(int puzzle[N][N]);
void	ft_putchar(char c);
void	fill_puzzle(int puzzle[N][N], char **str);
int		check_availability(int puzzle[][N], int row, int col, int num);
int		fill_num(int puzzle[N][N], int row, int col);
void	ft_putnbr(int nb);
int		ft_check_argv(int argc, char **argv);

int		ft_strlen(char *str)
{
	int l;
	
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}
>>>>>>> e613930a6640dd1605b2d605d1c0012ea3e754e8

int		main(int argc, char **argv)
{
	int puzzle[N][N];
	int i;

	i = 1;
	if (argc == 10 && ft_check_argv(argc, argv) == 1)
	{
<<<<<<< HEAD
		/*while (ft_strlen(argv[i]) == 9)
		{	
			i++;
		}*/
		ft_fill_puzzle(puzzle, argv);
		if (ft_fill_num(puzzle, 0, 0)) // when this statement returns as (1) True, it print's puzzle.
			ft_grid_print(puzzle);
=======
		fill_puzzle(puzzle, argv);
		if (fill_num(puzzle, 0, 0)) // when this statement returns as (1) True, it print's puzzle.
			grid_print(puzzle);
>>>>>>> e613930a6640dd1605b2d605d1c0012ea3e754e8
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
