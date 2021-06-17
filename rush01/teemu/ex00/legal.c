/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   legal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:05:40 by taitomer          #+#    #+#             */
/*   Updated: 2021/06/05 14:31:44 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		legal(int grid[N][N], int row, int col, int num)
{
	int x;

	x = -1;
	while (++x < N)
	{
		if (grid[row][x] == num)
		{
			return (0);
		}
	}
	return (1);
}
