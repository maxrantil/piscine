/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:58:35 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 08:48:42 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('/');
		return (ft_putchar('\n'));
	}
	ft_putchar('/');
	while (counter + 1 < x)
	{
		ft_putchar('*');
		counter++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	counter;

	counter = 1;
	ft_putchar('\\');
	if (x == 1)
	{
		return (ft_putchar('\n'));
	}
	while (counter + 1 < x)
	{
		ft_putchar('*');
		counter++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void	middle_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('*');
		return (ft_putchar('\n'));
	}
	ft_putchar('*');
	while (counter + 1 < x)
	{
		ft_putchar(' ');
		counter++;
	}
	ft_putchar('*');
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x == 1 && y == 1)
	{
		return (ft_putchar('/'));
	}
	if (x < 1 || y < 1)
		return (ft_putchar('\n'));
	if (y == 1)
	{
		first_line(x);
	}
	first_line(x);
	while (line_counter + 1 < y)
	{
		middle_line(x);
		line_counter++;
	}
	last_line(x);
	ft_putchar('\n');
}
