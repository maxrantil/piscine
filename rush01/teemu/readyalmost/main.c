/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:06:55 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:31:01 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "sudoku.h"
#define N 9

int		main(int argc, char **argv)
{
	int puzzle[N][N];
	int i;

	i = 1;
	if (argc == 10)
	{
		fill_puzzle(puzzle, argv);
		if (fill_num(puzzle, 0, 0))
			grid_print(puzzle);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
