/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fromgeek.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:44:20 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 05:57:19 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

int		legal(int grid[N][N], int row, int col, int num)
{
	int x;
	int y;
	int startrow;
	int startcol;
	int i;
	int j;

	x = -1;
	while (++x < 9)
	{
		if (grid[row][x] == num)
		{
			return (0);
		}
	}
	y = -1;
	while (++y < 9)
	{
		if (grid[y][col] == num)
		{
			return (0);
		}
	}
	startrow = row - row % 3;
	startcol = col - col % 3;
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (grid[i + startrow][j + startcol] == num)
			{
				return (0);
			}
		}
	}
	return (1);
}

int		solvesudoku(int grid[N][N], int row, int col)
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
		return (solvesudoku(grid, row, col + 1));
	}
	num = 0;
	while (++num <= N)
	{
		if (legal(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solvesudoku(grid, row, col + 1) == 1)
			{
				return (1);
			}
		}
		grid[row][col] = 0;
	}
	return (0);
}

int		main(void)
{
	int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
						{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
						{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
						{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
						{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
						{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
						{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
	if (solvesudoku(grid, 0, 0) == 1)
	{
		grid_print(grid);
	}
	return (0);
}
