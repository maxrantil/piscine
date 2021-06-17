#include <stdio.h>
#include "ft_list.h"
 
int ft_list_size(t_list *begin_list);
t_list		*ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);
 
int main(void)
{
	t_list *temp;
	int i;
	temp = ft_create_elem("Test0\n");
	ft_list_push_front(&temp, "Test1\n");
	ft_list_push_front(&temp, "Test2\n");
	ft_list_push_front(&temp, "Test3\n");
	ft_list_push_front(&temp, "Test4\n");
	ft_list_push_front(&temp, "Test5\n");
	i = ft_list_size(temp);
 
	while (temp)
	{
		printf("%s", temp->data);
        temp = temp->next;
	}
	printf("Total: %d\n", i);
}