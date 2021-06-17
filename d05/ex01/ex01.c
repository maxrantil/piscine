/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:02:01 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/02 08:47:24 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int	nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int i;
	
	i = -2147483648;
	ft_putnbr(i);
	printf(" = %d\n", i);
	/*while (i < 110 )
	{
		ft_putnbr(i);
		printf(" = %d,\n", i);
		i = i + 20;
	}
	while (i < 1100 )
	{
		ft_putnbr(i);
		printf(" = %d,\n", i);
		i = i + 200;
	} */
	return (0);
}
