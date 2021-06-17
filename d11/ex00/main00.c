#include <stdio.h>
#include "ft_list.h"
 
t_list *ft_create_elem(void *data);
 
int main(void)
{
	t_list *temp;
	char *a = "Testing";
 
	temp = ft_create_elem((void*)a);
 
	while (temp)
	{
		printf("%s\n", temp->data);
        temp = temp->next;
	}
}
 