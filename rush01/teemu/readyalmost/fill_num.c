/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 07:05:06 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:16:24 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#define N 9

int		fill_num(int puzzle[N][N], int row, int col)
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
		return (fill_num(puzzle, row, col + 1));
	num = 0;
	while (++num <= N)
		if (check_availability(puzzle, row, col, num) == 1)
			if (check_boxes(puzzle, row, col, num) == 1)
			{
				puzzle[row][col] = num;
				if (fill_num(puzzle, row, col + 1) == 1)
					return (1);
			}
	puzzle[row][col] = 0;
	return (0);
}
