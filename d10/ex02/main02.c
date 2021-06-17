#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int		*ft_map(int *tab, int length, int (*f)(int));

int add_one(int i)
{
	return (i + 1);
}

int main(void)
{
	int *map;
	int i;

	int tab[7] = {0, 1, 2, 3, 4, 5, 6};
	map = ft_map(tab, 7, &add_one);
	i = 0;
	while (i < 7)
	{
		printf("%d", map[i]);
		i++;
	}
	printf("\n");
	free(map);
	return (0);
}
