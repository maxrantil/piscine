/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 07:37:09 by mrantil           #+#    #+#             */
/*   Updated: 2021/05/30 07:58:08 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c)
{
	write(c, &c, c);
}

int	main()
{
	ft_print_alphabet();
	return (0);
}
