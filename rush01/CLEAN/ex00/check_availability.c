/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_availability.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:37 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 09:41:20 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 9

int	check_availability(int puzzle[][N], int row, int col, int num)
{
	int x;
	int y;
	int startrow;
	int startcol;
	int i;
	int j;

	x = -1;
	while (++x < 9)  // checks row for same number
	{
		if (puzzle[row][x] == num)
		{
			return (0);
		}
	}
	y = -1;
	while (++y < 9) // checks column for same number
	{
		if (puzzle[y][col] == num)
		{
			return (0);
		}
	}
	startrow = row - row % 3; // checks box 3x3 for same number
	startcol = col - col % 3; // checks box 3x3 for same number
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (puzzle[i + startrow][j + startcol] == num)
			{
				return (0);
			}
		}
	}
	return (1);
}
