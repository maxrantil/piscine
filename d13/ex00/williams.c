#include <stdlib.h>
#include <stdio.h>
#include "ft_btree.h"
 
void printtabs(int level)
{
	int counter;
 
	counter = -1;
	while (++counter < level)
		printf("\t");
}
 
 
void	print_tree(t_btree *root, int level)
{
	if (root == 0)
	{
		printtabs(level);
		printf("-Empty-\n");
	}
	else
	{
		printtabs(level);
		printf("item = %d\n", root->item);
		printtabs(level);
		printf("Left\n");
		print_tree(root->left, level + 1);
		printtabs(level);
		printf("right\n");
		print_tree(root->right, level + 1);
		printf("done\n");
	}
}
 
void print_start(t_btree *root)
{
	print_tree(root, 0);
}

void increaser(void *num)
{
	printf("%d\n", num);
}
 
int main(void)
{
	t_btree *n1 = btree_create_node(1);
	/*t_btree *n2 = btree_create_node(2);
	t_btree *n3 = btree_create_node(3);
	t_btree *n4 = btree_create_node(4);
	t_btree *n5 = btree_create_node(5);
	t_btree *n6 = btree_create_node(6);
	t_btree *n7 = btree_create_node(7);*/
 
	//n1->left = n2;
	/*n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;*/
 
	print_start(n1);
	//btree_apply_prefix(n1, increaser);
	//print_start(n1);
 
	return (0);
}