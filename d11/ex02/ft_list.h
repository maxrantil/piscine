/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:24:17 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/09 19:11:54 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

void					ft_list_push_front(t_list **begin_list, void *data);
t_list					*ft_create_elem(void *data);

#endif
