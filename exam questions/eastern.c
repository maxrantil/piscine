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
    ft_putchar(str[i]);
    i++;
  }
}

int rot_13_main(int argc, char **argv)
{
int i = 0;
 
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' & argv[1][i] <= 'N'))
			{
				argv[1][i] += 13;
			} else if ((argv[1][i] >= 'n' && argv[01][i] <= 'z') || (argv[1][i] >= 'N' & argv[1][i] <= 'Z')) {
				argv[1][i] -= 13;
			}
			i++;
		}
		putstr(argv[1]);
	}
	ft_putchar("\n");
	return (0);
}
