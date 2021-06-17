
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	while (*str)
		write(1, &(*str++), 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int main(int ac, char **av)
{
	int j;
	int h;
	int len;
	char *rev;

	h = ft_strlen(&av[1][0]);
	j = 0;
	len = h;
	rev = malloc(sizeof(*rev) * (h + 1));
	if (ac == 2)
	{
		while (j < len)
		{
			rev[j] = av[1][h - 1];
			j++;
			h--;
		}
		rev[j] = '\0';
		ft_putstr(rev);
		ft_putchar('t');
	}
	ft_putchar('\n');
	return 0;
}

/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/