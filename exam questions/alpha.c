#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
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
	while(*str)
		i++;
	return i;
}

int main(int argc, char **argv)
{
	int	store;
	int	i;
	char *s = "alpha";

	i = 0;
	store = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					store = argv[1][i] - 96;
				if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					store = argv[1][i] - 64;
				while (store)
				{
					ft_putchar(argv[1][i]);
					store--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/