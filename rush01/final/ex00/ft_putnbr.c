/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:00:48 by pskytta           #+#    #+#             */
/*   Updated: 2021/06/06 18:20:43 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#include "sudoku.h"

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb > 0)
	{
		ft_putchar(nb + '0');
		ft_putchar(' ');
	}
}