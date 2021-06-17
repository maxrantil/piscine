/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:23:35 by jjokilah          #+#    #+#             */
/*   Updated: 2021/06/13 20:20:53 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

int			main(void)
{
	char	*check;
	char	*str;
	char	*error;

	str = "[rush-0X] [X] [X]\n";
	error = "Error\n";
	check = (char *)malloc(sizeof(char *));
	if (read(0, check, 1) != 0)
	{
		ft_putstr(str);
		free(check);
		return (0);
	}
	else
		ft_putstr(error);
	free(check);
	return (0);
}
