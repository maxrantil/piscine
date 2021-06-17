/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_boxes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:49:12 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/06 15:24:17 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 9

int		ft_check_boxes(int puzzle[N][N], int row, int col, int num)
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
