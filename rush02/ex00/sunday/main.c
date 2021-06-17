/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:13:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/13 07:07:47 by mrantil          ###   ########.fr       */
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
	rush04(x, y);
	return (0);

	char rush00[] = "rush00";
	char rush01[] = "rush01";
	char rush02[] = "rush02";
	char rush03[] = "rush03";
	char rush04[] = "rush04";
	char rush00str[] = "[rush-00]";
	char rush01str[] = "[rush-01]";
	char rush02str[] = "[rush-02]";
	char rush03str[] = "[rush-03]";
	char rush04str[] = "[rush-04]";

	if (argv[0] == rush04)
	{
		ft_putstr(rush04str);
	}
	return (0);
}