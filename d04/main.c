/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 06:42:32 by mrantil           #+#    #+#             */
/*   Updated: 2021/05/31 05:17:16 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	if (ft_iterative_factorial())
	{
	printf("ft_iterative_factorial(11) = ");
	printf("%d\n", ft_iterative_factorial(11));
	printf("ft_iterative_factorial(1) = ");
	printf("%d\n", ft_iterative_factorial(1));
	}
	
	if (ft_recursive_factorial())
	{
	int	i;

	i = 1;
	
	printf("%d\n", ft_recursive_factorial(i));
	}
	
	if (ft_iterative_power())
	{
	int a = 5;
	int b = 5;
	printf("%d\n", ft_iterative_power(a, b));
	}
	
	if(ft_recursive_power())
	{
	int	i;
	int	k;

	i = 3;
	k = 3;
	printf("%d\n", ft_recursive_power(i, k));
	}
}
