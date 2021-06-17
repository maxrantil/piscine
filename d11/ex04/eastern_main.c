#include <stdio.h>
#include "ft_list.h"
 
t_list *ft_list_last(t_list *begin_list);
t_list		*ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);
 
int main(void)
{
	t_list *temp, *temp1;;
	temp = ft_create_elem("Test0\n");
	ft_list_push_front(&temp, "Test1\n");
	ft_list_push_front(&temp, "Test2\n");
	ft_list_push_front(&temp, "Test3\n");
	ft_list_push_front(&temp, "Test4\n");
	ft_list_push_front(&temp, "Test5\n");
 
	temp1 = ft_list_last(temp);
	while ( temp1 != NULL)
	{
		printf("%s", temp1->data);
	}
 
}