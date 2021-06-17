/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:21:17 by ostrizh           #+#    #+#             */
/*   Updated: 2021/05/30 14:32:58 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush03(int x, int y);

int		main()
{
	printf("rush03(5, 6)\n");
	rush01(5, 6);
	ft_putchar('\n');
	printf("rush03(5, 3)\n");
	rush01(5, 3);
	ft_putchar('\n');
	printf("rush03(5, 1)\n");
	rush01(5, 1);
	ft_putchar('\n');
	return(0);
}
