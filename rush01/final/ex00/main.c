/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:06:55 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 17:30:34 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"
#define N 9

int		main(int argc, char **argv)
{
	int puzzle[N][N];
	int i;

	i = 1;
	if (argc == 10 && ft_check_argv(argc, argv) == 1)
	{
		ft_fill_puzzle(puzzle, argv);
		if (ft_fill_num(puzzle, 0, 0))
			ft_grid_print(puzzle);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
