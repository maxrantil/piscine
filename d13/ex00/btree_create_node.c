/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 06:34:52 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/12 07:52:58 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *root;

	root = (t_btree*)malloc(sizeof(t_btree));
	if (root)
	{
		root->right = NULL;
		root->left = NULL;
		root->item = item;
	}
	return (root);
}
