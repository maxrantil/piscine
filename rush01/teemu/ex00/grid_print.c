/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:22:07 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/05 13:24:23 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	grid_print(int grid[N][N])
{
	row = -1;
	while (++row < N)
	{
		col = -1;
		while (++col < N)
		{
			ft_putnbr(grid[row][col]);
			ft_putchar('\n');
		}
	}
}
