/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:35:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 18:50:42 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*swipe;
	t_list	*assign;

	assign = *begin_list;
	while (assign)
	{
		swipe = assign;
		assign = assign->next;
		free(swipe);
	}
	*begin_list = NULL;
}
