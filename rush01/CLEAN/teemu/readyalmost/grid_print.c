/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:04:46 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 07:21:24 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9

void	ft_putchar(char c);

void	ft_putnbr(int nb);

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
