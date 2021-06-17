#include <stdlib.h>
#include <stdio.h>
int ft_count_if(char **tab, int(*f)(char*));

int ft_print_if_letter(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
    {
        return(1);
    }
    while (str[i] != '\0')
    {
        if (!((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z')))
            {
                return (0);
            }
        str++;
    }
    return (1);
}


int main()
{
    char    *tab[5] = {"a", "a", "babba", "babaaba", 0};
    char    *tab2[7] = {"th1is", "shou2ld", "re3turn", "two4", "bab", "!", 0};
    char    *tab3[7] = { "one", "two", "D", "!", "\n", "dasdas", 0};
    printf("ft_any: %d\n", ft_count_if(tab, &ft_print_if_letter));
    printf("ft_any: %d\n", ft_count_if(tab2, &ft_print_if_letter));
    printf("ft_any: %d\n", ft_count_if(tab3, &ft_print_if_letter));
  return 0;
}