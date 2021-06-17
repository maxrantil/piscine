/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:06:55 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 14:51:08 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define N 9

void	grid_print(int puzzle[N][N]);

void	ft_putchar(char c);

int		check_availability(int puzzle[][N], int row, int col, int num);

int		fill_num(int puzzle[N][N], int row, int col);

void	ft_putnbr(int nb);

int		ft_strlen(char *str);

void	fill_puzzle(int puzzle[N][N], char **str);

int		main(int argc, char **argv)
{
	int puzzle[N][N];
	int i;

	i = 1;
	if (argc == 10)
	{
		fill_puzzle(puzzle, argv);
		if (fill_num(puzzle, 0, 0))
			grid_print(puzzle);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
