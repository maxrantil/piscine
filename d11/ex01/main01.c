#include <stdio.h>
#include "ft_list.h"
 
int main(void)
{
	t_list *temp;
	temp = ft_create_elem("Test0\n");
	ft_list_push_back(&temp, "Test1\n");
	ft_list_push_back(&temp, "Test2\n");
	ft_list_push_back(&temp, "Test3\n");
	ft_list_push_back(&temp, "Test4\n");
	ft_list_push_back(&temp, "Test5\n");
 
	while (temp)
	{
		printf("%s", temp->data);
        temp = temp->next;
	}
 
}