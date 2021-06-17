/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_availability.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:37 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 15:18:40 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#define N 9

int	check_availability(int puzzle[N][N], int row, int col, int num)
{
	int x;
	int y;

	x = -1;
	while (++x < 9)
	{
		if (puzzle[row][x] == num)
		{
			return (0);
		}
	}
	y = -1;
	while (++y < 9)
	{
		if (puzzle[y][col] == num)
		{
			return (0);
		}
	}
	return (1);
}
