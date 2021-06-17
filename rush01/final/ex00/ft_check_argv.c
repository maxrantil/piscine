/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:49:06 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/07 15:07:49 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_argv(int argc, char **argv)
{
	int i;
	int *len;
	int count;

	(void)argc;
	i = 1;
	count = 0;
	while (argv[i] != '\0')
	{
    	if (ft_strlen(argv[i]) == 9)
    	{
        	count++;
   	 	}
    	i++;
	}
	if (count == 9)
		return (1);
	else
		return (0);
	}
	