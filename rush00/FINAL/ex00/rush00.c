/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostrizh <ostrizh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:16:26 by mrantil           #+#    #+#             */
/*   Updated: 2021/05/30 14:27:41 by ostrizh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_end_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('o');
		return (ft_putchar('\n'));
	}
	ft_putchar('o');
	while (counter + 1 < x)
	{
		ft_putchar('-');
		counter++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	middle_line(int x)
{
	int	counter;

	counter = 1;
	if (x == 1)
	{
		ft_putchar('|');
		return (ft_putchar('\n'));
	}
	ft_putchar('|');
	while (counter + 1 < x)
	{
		ft_putchar(' ');
		counter++;
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x < 1 || y < 1)
		return (ft_putchar('\n'));
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		return (ft_putchar('\n'));
	}
	if (y == 1)
		return (first_end_line(x));
	first_end_line(x);
	while (line_counter + 1 < y)
	{
		middle_line(x);
		line_counter++;
	}
	first_end_line(x);
	ft_putchar('\n');
}
