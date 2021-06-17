/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:10:44 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 18:50:31 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *begin_elem;

	if (*begin_list)
	{
		begin_elem = ft_create_elem(data);
		if (begin_elem)
		{
			begin_elem->next = (*begin_list);
			(*begin_list) = begin_elem;
		}
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*param_push;
	int			i;

	param_push = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&param_push, av[i]);
		i++;
	}
	return (param_push);
}
