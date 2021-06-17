/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:38:37 by mrantil           #+#    #+#             */
/*   Updated: 2021/06/10 12:10:29 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void print_tree(t_btree *trad)
{
	while (trad)
	{
		ft_putstr(trad->item);
		trad = trad->right;
	}
}


int	main()
{
	t_btree *trad;

	trad = NULL;

	trad = btree_create_node((void*)33);
	trad = btree_create_node((void*)35);
	trad = btree_create_node((void*)37);
	
	print_tree(trad);
}
*/
 
t_btree *btree_create_node(int *item);
 
void print2DUtil(t_btree *root, int space)
{
	int count = 0;
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += count;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    printf("%d\n", root->item);
 
    // Process left child
    print2DUtil(root->left, space);
}
 
void print2D(t_btree *root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}
 
int main(void)
{
	t_btree *temp;
	temp = btree_create_node(10);
 
	temp->left = btree_create_node(20);
	temp->right = btree_create_node(30);
 
	print2D(temp);
 
 
        //temp = temp->next;
 
}