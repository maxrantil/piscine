/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:17:40 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 12:19:43 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *prefix_elem;

	prefix_elem = (t_btree*)malloc(sizeof(t_btree));
	if (prefix_elem)
	{
		prefix_elem->right = NULL;
		prefix_elem->left = NULL;
		prefix_elem->item = item;
	}
	return (prefix_elem);
}
