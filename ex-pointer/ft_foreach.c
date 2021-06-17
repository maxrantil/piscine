/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:34:05 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/08 17:59:32 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_foreach(int tab, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		tab[i];
		ft_putnbr(tab[i]);
		i++;
	}
}
