

#ifndef FT_H
#define	FT_H

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
int		*ft_map(int *tab, int length, int(*f)(int));

#endif

