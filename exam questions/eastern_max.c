#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar(2 + '0');
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}


int check_max(int *mmax, int l)
{
	int i;
	i = 1;
	if (*mmax == 0 || l == 0)
		return (0);
	while (i < l)
	{
		if (mmax[0] < mmax[i])
			mmax[0] = mmax[i];
		i++;
	}
	return (mmax[0]);
}

int main()
{
	int arr[5] = {1, 2, 8, 5, 6};
	ft_putnbr(check_max(arr, 5));
	return (0);
}