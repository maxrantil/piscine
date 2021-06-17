#include <stdio.h>
#include "ft_list.h"
 
t_list *ft_create_elem(void *data);
void	ft_list_clear(t_list **begin_list);
 
int main(void)
{
	t_list *temp;
	char *a = "Testing";
 
	temp = ft_create_elem((void*)a);
	ft_list_clear(&temp);
 
	if (temp != NULL)
	{
		printf("%s\n", temp->data);
	} else {
		printf("Empty\n");
	}
