/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:21:17 by ostrizh           #+#    #+#             */
/*   Updated: 2021/06/13 20:18:57 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_line(int x)
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
	ft_putchar('A');
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

void	last_line(int x)
{
	int counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('C');
		return (ft_putchar('\n'));
	}
	ft_putchar('C');
	while (counter + 1 < x)
	{
		ft_putchar('B');
		counter++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush02(int x, int y)
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
		return (first_line(x));
	}
	line_counter = 1;
	first_line(x);
	while (line_counter + 1 < y)
	{
		middle_line(x);
		line_counter++;
	}
	last_line(x);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush02(x, y);
	return (0);
}
