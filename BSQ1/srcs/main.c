/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralve <ralve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:52:44 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/16 14:33:52 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	*buf;
	int		buf_size;
	int		fd;
	int		i;

	(void)argc;
	i = 0;
	buf_size = 4096;
	fd = open(argv[1], O_RDONLY);
	buf = malloc(sizeof(char) * (buf_size + 1));
	if (buf)
	{
		while (read(fd, &(buf[i]), 1))
		{
			i++;
		}
		ft_change(buf);
	}
	if (!buf)
		write(1, "X", 1);
	close(fd);
	free(buf);
	return (0);
}
