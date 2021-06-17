#include <unistd.h>

void ft_putchar(char c)
{
	write(1 , &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
		write(1, &(*str++), 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_str_rev(char *str)
{
	int i;
	int len;
	int j;
	char dest[50];
	char *ptr;

	len = ft_strlen(str);
	j = len;
	i = 0;
	while (i < j)
	{
		dest[i] = str[len - 1];
		len--;
		i++;
	}
	dest[i] = '\0';
	ptr = dest;
	return (ptr);
}
/*
char *ft_str_rev(char *str)
{
	int i;
	int len;
	int j;
	char temp[50];
	char *ptr;
 
	i = 0;
	len = ft_strlen(str);
	j = len;
	while (i < j)
	{
		temp[i] = str[len - 1];
		i++;
		len--;
	}
	temp[i] = '\0';
	ptr = temp;
	return (ptr);
}*/

/*char    *ft_str_rev(char *str)
{
    char    reversed[1000];
    int     strlen;
    int pos;
    char    *revstr;

    strlen = ft_strlen(str);
    pos = 0;
    while (pos < strlen)
    {
        reversed[pos] = str[strlen - 1 - pos];
        ++pos;
    }
    reversed[pos] = '\0';
    revstr = reversed;
    return revstr;
}*/

int main()
{
	char mening[] = "detta ar en mening";
	char *rev_men = ft_str_rev(mening);
	ft_putstr(rev_men);
	write(1, "\n", 1);
	return (0);
}
