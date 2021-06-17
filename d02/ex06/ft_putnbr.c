/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:36:09 by mrantil           #+#    #+#             */
/*   Updated: 2021/05/31 08:29:11 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	*nbr;
	int	i;
	int	res;

	i = 0;
	while (nbr[i] != '\0')
	{
		ft_putchar(nbr[i]);
		i++;
	}
	res = res * 10 + nbr[i] - 48;
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
