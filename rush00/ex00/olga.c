/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:08:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/05/30 09:43:48 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_end_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('A');
		return ft_putchar('\n');
	}
	ft_putchar('A');
	while (counter + 1 < x)
	{
		ft_putchar('B');
		counter++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	middle_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('B');
		return (ft_putchar('\n'));
	}
	ft_putchar('B');
	while (counter + 1 < x)
	{
		ft_putchar(' ');
		counter++;
	}
	ft_putchar('B');
}

void	rush03(int x, int y)
{
	int	line_counter;

	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		return (ft_putchar('\n'));
	}
	if (y == 1)
	{
		first_end_line(x);
		return (ft_putchar('\n'));
	}
	line_counter = 1;
	first_end_line(x);
	while (line_counter + 1 < y)
	{
		middle_line(x);
		line_counter++;
	}
	first_end_line(x);
}				

