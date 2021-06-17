/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:21:17 by ostrizh           #+#    #+#             */
/*   Updated: 2021/06/13 20:19:11 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_end_line(int x)
{
	int counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('A');
		return (ft_putchar('\n'));
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
	int counter;

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
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	int line_counter;

	if (x < 1 || y < 1)
	{
		return (ft_putchar('\n'));
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		return (ft_putchar('\n'));
	}
	if (y == 1)
	{
		return (first_end_line(x));
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

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush03(x, y);
	return (0);
}
