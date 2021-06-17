/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:21:00 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 19:14:47 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		if (new)
		{
			new->next = (*begin_list);
			(*begin_list) = new;
		}
	}
	else
		*begin_list = ft_create_elem(data);
}
