/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:07:52 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/09 12:19:44 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_argc(int argc)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	return (1);
}
