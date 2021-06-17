/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_push_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:31:53 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 17:35:44 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = new;
	else
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}
