/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_push_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:15:54 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 17:22:10 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list ** begin_list, void *data)
{
	t_list *temporary;
	t_list *new;

	temporary = *begin_list;
	new = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = new;
	else
	{
		while (temporary->next != 0)
			temporary = temporary->next;
		temporary->next = new;
	}
}
