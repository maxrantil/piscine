/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:44:17 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 12:39:45 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

int			main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = read(0, buf, BUF_SIZE);
	if (ft_argc(argc))
	{
		while (write(0, &fd, BUF_SIZE))
			ft_putstr(buf);
	}
	return (0);
}
