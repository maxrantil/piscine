#include <stdio.h>
 
char  **epur_str_main(int argc, char **argv);
 
int main(void)
{
	char **a;
	int i = 0;
    char *arg0[] = {"See? It´s easy to print the same string"};
    a = epur_str_main(1, arg0);
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
    char *arg1[] = {" this            time it       will         be      more comples   .   "};
    a = epur_str_main(1, arg1);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
    char *arg2[] = {"No shit sherlock", "foe sho shurlowq, no shiiiet"};
    a = epur_str_main(2, arg2);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
    char *arg3[] = {""};
    a = epur_str_main(1, arg3);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
    return (0);
}