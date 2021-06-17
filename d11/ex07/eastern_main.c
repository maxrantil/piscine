#include "ft_list.h"
#include <stdio.h> 
 
t_list		*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
 
int main(void)
{
	t_list *temp;
	temp = ft_create_elem("Test0\n");
	ft_list_push_back(&temp, "Test1\n");
	ft_list_push_back(&temp, "Test2\n");
	ft_list_push_back(&temp, "Test3\n");
	ft_list_push_back(&temp, "Test4\n");
	ft_list_push_back(&temp, "Test5\n");
 
	printf("%s", (char*)ft_list_at(temp, 3)->data);	
	printf("%s", (char*)ft_list_at(temp, 1)->data);
	printf("%s", (char*)ft_list_at(temp, 5)->data);	
}