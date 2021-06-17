/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:04:46 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 16:54:30 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#include "sudoku.h"

void	ft_grid_print(int puzzle[N][N])
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
