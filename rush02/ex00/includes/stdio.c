#include "ft.h"
#define BUF_SIZE 8192

int	ft_read(int fd)
{
	int ret;
	char buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		if (ft_read(0) == -1)
			return (1);
	}
	return (0);
}
