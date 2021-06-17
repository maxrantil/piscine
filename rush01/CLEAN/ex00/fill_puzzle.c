/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_puzzle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:22:01 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 13:28:33 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (str[arg][col] != '.') //if line0[0] is not a '.' puzzle[N][N] = line0[0]
				puzzle[arg - 1][col] = str[arg][col] - '0';
			else
				puzzle[arg - 1][col] = 0;
			col++;
		}
		arg++;
	}
}