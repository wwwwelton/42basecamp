#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fill_tab_with_zeroes(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
}

void	ft_fill_tab(int *tab, int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		tab[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
}

void	ft_print_reverse_tab(int *tab, int size)
{
	int	i;

	i = size;
	while (i >= 0)
	{
		if (tab[i] != '0')
		{
			ft_putchar(tab[i]);
		}
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int	tab[10];
	int	signal;

	ft_fill_tab_with_zeroes(tab, 10);
	signal = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		signal = 1;
	}
	if (nb <= 2147483647)
	{
		ft_fill_tab(tab, nb);
		if (signal)
			ft_putchar('-');
		ft_print_reverse_tab(tab, 10);
	}
}
