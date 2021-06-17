/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralve <ralve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:34:20 by ralve             #+#    #+#             */
/*   Updated: 2021/06/16 13:03:59 by ralve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_change(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *len);
void	ft_putnbr(int nb);

#endif
