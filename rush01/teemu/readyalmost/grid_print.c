/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:04:46 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:29:59 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#define N 9

void	grid_print(int puzzle[N][N])
{
	int row;
	int col;

	row = -1;
	while (++row < N)
	{
		col = -1;
		while (++col < N)
			ft_putnbr(puzzle[row][col]);
		ft_putchar('\n');
	}
}
