/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 07:05:06 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 15:24:10 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#include "sudoku.h"

int		ft_fill_num(int puzzle[N][N], int row, int col)
{
	int num;

	if (row == N - 1 && col == N) // check if we are in grid pos 81 aka END
	{
		return (1);
	}
	if (col == N) // checks the end of column and moves to next row (zeroing column)
	{
		row++;
		col = 0;
	}
	if (puzzle[row][col] > 0) // if true we move one column to right
	{
		return (ft_fill_num(puzzle, row, col + 1));
	}
	num = 0;
	while (++num <= N)
	{
		if (ft_check_availability(puzzle, row, col, num) == 1) // checks the row, col, box for nbrs
		{
			puzzle[row][col] = num;
			if (ft_fill_num(puzzle, row, col + 1) == 1) // checks for the next column
			{
				return (1);
			}
		}
		puzzle[row][col] = 0; // backtracing to check another number
	}
	return (0);
}