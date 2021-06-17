/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 07:05:06 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:28:11 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#include "sudoku.h"

int		ft_fill_num(int puzzle[N][N], int row, int col)
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
	if (puzzle[row][col] > 0)
	{
		return (ft_fill_num(puzzle, row, col + 1));
	}
	num = 0;
	while (++num <= N)
	{
		if (ft_check_availability(puzzle, row, col, num) == 1)
		{
			puzzle[row][col] = num;
			if (ft_fill_num(puzzle, row, col + 1) == 1)
				return (1);
		}
		puzzle[row][col] = 0;
	}
	return (0);
}
