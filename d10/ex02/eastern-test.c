#include <stdio.h>
 
int f(int x)
{
return (x + 1);
}
 
int *ft_map(int *tab, int length, int(*f)(int));
 
int main(void)
{
int *map = {6 ,2 ,3};
int *a = {1, 2, 3};
map = ft_map(a, 3, f);
int i;
 
i = 0;
while (i < 3)
	{
		printf("%d\n", map[i]);
		i++;
	}
return (0);
}