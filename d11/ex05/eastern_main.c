#include "ft_list.h"
#include <stdio.h>
 
t_list		*ft_create_elem(void *data);
t_list *ft_list_push_params(int ac, char **av);
 
int main(int ac, char **av)
{
	t_list *test = ft_list_push_params(ac, av);
 
	while (test)
	{
		printf("%s\n", test->data);
	}
 
	return (0);
}