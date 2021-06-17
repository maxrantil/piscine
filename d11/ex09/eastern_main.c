#include "ft_list.h"
#include <stdio.h>
 
t_list		*ft_create_elem(void *data);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
 
t_list *check_argv(char	**argv)
{
	t_list	*front = 0;
	t_list	*end = 0;
	argv++;
	while (*argv != 0)
	{
		if (end == 0)
			front = end = ft_create_elem(*argv++);
		else
		{
			end->next = ft_create_elem(*argv++);
			end = end->next;
		}
	}
	return (front);
}
 
void print_str(char	*str)
{
	printf("%s\n", str);
}
 
int main(int argc, char **argv)
{
	if (argc < 1)
		return 1;
	t_list *temp = check_argv(argv);
	ft_list_foreach(temp, (void(*)(void*))print_str);
}
