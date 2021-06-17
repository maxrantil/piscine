
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i] != '\0')
			i += 1;
		while ((av[1][i] != ' '|| av[1][i] != '\t') && av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				ft_putchar('\n');
				return 0;
			}
		}
	}
	ft_putchar('\n');
	return 0;
}

/*'Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/