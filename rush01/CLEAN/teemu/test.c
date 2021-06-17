/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:19:25 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/05 13:35:53 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define N 9

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int modulo;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	if (nb >= 10)
	{
		modulo = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar('0' + modulo);
	}
}

void	grid_print(int grid[N][N])
{
	int row;
	int col;

	row = -1;
	while (++row < N)
	{
		col = -1;
		while (++col < N)
			ft_putnbr(grid[row][col]);
		ft_putchar('\n');
	}
}

int		isSafe(int grid[N][N], int row, int col, int num)
{
	int x;
	int startRow;
	int startCol;
	int i;
	int j;

	x = -1;
	while (++x < N)
	{
		if (grid[row][x] == num)
		{
			return (0);
		}
	}
	while (++x < N)
	{
		if (grid[x][col] == num)
		{
			return (0);
		}
	}
	startRow = row - row % 3;
	startCol = col - col % 3;
	i = -1;
	j = -1;
	while (++i < 3)
	{
		while (++j < 3)
		{
			if (grid[i + startRow][j + startCol] == num)
			{
				return (0);
			}
		}
	}
	return (1);
}

int		solveSudoku(int grid[N][N], int row, int col)
{
	int num;

	if (row == N - 1 && col == N)
	{
		return (1);
	}
	if (col == N)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
	{
		return (solveSudoku(grid, row, col + 1));
	}
	num = 0;
	while (++num <= N)
	{
		if (isSafe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
		}
		if (solveSudoku(grid, row, col + 1) == 1)
		{
			return (1);
		}
		grid[row][col] = 0;
	}
	return (0);
}

int		main(void)
{
	int	grid[N][N] = { {3, 0, 6, 5, 0, 8, 4, 0, 0},
						{5, 2, 0, 0, 0, 0, 0, 0, 0},
						{0, 8, 7, 0, 0, 0, 0, 3, 1},
						{0, 0, 3, 0, 1, 0, 0, 8, 0},
						{9, 0, 0, 8, 6, 3, 0, 0, 5},
						{0, 5, 0, 0, 9, 0, 6, 0, 0},
						{1, 3, 0, 0, 0, 0, 2, 5, 0},
						{0, 0, 0, 0, 0, 0, 0, 7, 4},
						{0, 0, 5, 2, 0, 6, 3, 0, 0} };

	grid_print(grid);
	return (0);
}
