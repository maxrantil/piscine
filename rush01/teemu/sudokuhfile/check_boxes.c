/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_boxes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:49:12 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 14:40:13 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 9

int		check_boxes(int puzzle[N][N], int row, int col, int num)
{
	int startrow;
	int startcol;
	int i;
	int j;

	startrow = row - row % 3;
	startcol = col - col % 3;
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
