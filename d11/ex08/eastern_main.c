#include "ft_list.h"
#include <stdio.h>
 
t_list		*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void ft_list_reverse(t_list **begin_list);
 
int main(void)
{
	t_list *temp;
	temp = ft_create_elem("Test0\n");
	ft_list_push_front(&temp, "Test1\n");
	ft_list_push_front(&temp, "Test2\n");
	ft_list_push_front(&temp, "Test3\n");
	ft_list_push_front(&temp, "Test4\n");
	ft_list_push_front(&temp, "Test5\n");
 
	ft_list_reverse(&temp);
	while ( temp != NULL)
	{
		printf("%s", temp->data);
		temp = temp->next;
	}
}