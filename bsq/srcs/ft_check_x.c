int ft_check_x(char *str)
{
	int counter_x;

	counter_x = 0;
	while (*str != '\0')
	{
		str++;
		counter_x++;
	}
	return (counter_x);
}

int ft_check_y(char *str)
{
	int counter_y;
	int i;

	counter_y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			counter_y++;
		}
		i++;
	}
	return (counter_y);
}
