/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:51:04 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 19:19:31 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 1;
	if (begin_list == NULL)
	{
		return (0);
	}
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (counter);
}
