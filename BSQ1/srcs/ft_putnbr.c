/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralve <ralve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:57:57 by ralve             #+#    #+#             */
/*   Updated: 2021/06/16 12:58:10 by ralve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int nb)
{
	long l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		ft_putchar('-');
		l_nb = l_nb * -1;
	}
	if (l_nb < 10)
	{
		ft_putchar('0' + l_nb);
	}
	else
	{
		ft_putnbr(l_nb / 10);
		ft_putnbr(l_nb % 10);
	}
}
