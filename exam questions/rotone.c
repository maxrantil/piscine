#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int rot_13_main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 1)
    {
		while (argv[0][i] != '\0')
 		{
    		if ((argv[0][i] >= 'a' && argv[0][i] <= 'm') || (argv[0][i] >= 'A' && argv[0][i] <= 'M'))
     	 		ft_putchar(argv[0][i] + 13);
    		else if ((argv[0][i] > 'm' && argv[0][i] <= 'z') || (argv[0][i] > 'M' && argv[0][i] <= 'Z'))
     			ft_putchar(argv[0][i] - 13);
    		else if (argv[0][i] != '\0')
				ft_putchar(argv[0][i]);
			i++;
		}
  	}
	ft_putchar('\n');
	return (0);
}
