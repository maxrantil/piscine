
#include <unistd.h>
#include <stdio.h>
/*char ft_putnbr(int i)
{
	int nb;


	if (i > 9)
	{

	}
}*/

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int minus;

	i = 0;
	res = 0;
	minus = 1;
	if (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		minus -= 1;
		i++; 
	}
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * minus);
}

int main(int argc, char **argv)
{
	const char *str = "12345";
	int a;
	a = ft_atoi(str);

	printf("%d\n", a);


	
}
/*Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/