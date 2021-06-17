/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:00:48 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 16:54:27 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
		//if (ft_strlen(argv) == 9)
			
		ft_putchar(' ');
	}
}
