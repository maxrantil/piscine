#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

int main()
{
	int i;
	char *k = "tjolavippen";
	char *j = "testingtesting";
	int g;
	int h;

	i = 0;
	g = 'r';
	h = '\n';

	ft_putchar('m');
	ft_putchar('\n');

	ft_putstr(&k[i]);
	write(1, &h, 1);

	write(1, &g, 1);

	write(1, &h, 1);

	ft_putstr(k);

	write(1, &h, 1);
	write(1, j, ft_strlen(j));
	write(1, &h, 1);
	return (0);
}
