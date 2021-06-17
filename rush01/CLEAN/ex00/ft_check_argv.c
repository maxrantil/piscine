/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:49:06 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/06 16:32:45 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_argv(int argc, char **argv)
{
	int l1;
	int l2;
	int l3;
	int l4;
	int l5;
	int l6;
	int l7;
	int l8;
	int l9;
	int i;

	(void)argc;
	l1 = ft_strlen(argv[1]);
	l2 = ft_strlen(argv[2]);
	l3 = ft_strlen(argv[3]);
	l4 = ft_strlen(argv[4]);
	l5 = ft_strlen(argv[5]);
	l6 = ft_strlen(argv[6]);
	l7 = ft_strlen(argv[7]);
	l8 = ft_strlen(argv[8]);
	l9 = ft_strlen(argv[9]);

	if (l1 == 9 && l2 == 9 && l3 == 9 && l4 == 9 && l5 == 9 && l6 == 9 && l7 == 9 && l8 == 9 && l9 == 9)
		return (1);
	else
		return (0);
}