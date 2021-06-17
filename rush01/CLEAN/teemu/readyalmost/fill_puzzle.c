/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_puzzle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:43:22 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 14:45:35 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define N 9

void	fill_puzzle(int puzzle[N][N], char **str)
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
