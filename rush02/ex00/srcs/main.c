/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:21:17 by ostrizh           #+#    #+#             */
/*   Updated: 2021/06/12 14:14:27 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int x;
	int y;

	(void)argc;
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush00(x, y);
	return (0);
}