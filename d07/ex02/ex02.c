#include <stdio.h>
#include <string.h>


int        ft_ultimate_range(int **range, int min, int max);

int        main()
{
    int        *arr;
    int 	i;
    int        min = 1;
    int        max = 19;
	int		a;


    a = ft_ultimate_range(&arr, min, max);
    i = 0;
    printf("The result of arr %d \n", a); 
    return(0);
}