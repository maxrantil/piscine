/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_puzzle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:22:01 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:24:18 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#include "sudoku.h"

void	ft_fill_puzzle(int puzzle[N][N], char **str)
{
	int arg;
	int col;

	arg = 1;
	while (arg < 10)
	{
		col = 0;
		while (col < 9)
		{
			if (str[arg][col] != '.')
				puzzle[arg - 1][col] = str[arg][col] - '0';
			else
				puzzle[arg - 1][col] = 0;
			col++;
		}
		arg++;
	}
}
