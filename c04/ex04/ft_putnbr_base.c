#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fill_vet_zeroes(char vet[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		vet[i] = '\0';
		i++;
	}
}

void	ft_print_vet_reverse(char vet[], int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		ft_putchar(vet[i]);
		i--;
	}
}

int	ft_len_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (base [i] == '-' || base[i] == '+')
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		vet[32];
	long int	i;
	long int	nbr_long;
	int			base_len;

	nbr_long = nbr;
	base_len = ft_len_check_base(base);
	if (base_len < 2)
		return ;
	ft_fill_vet_zeroes(vet, 32);
	if (nbr_long == 0)
		ft_putchar('0');
	else if (nbr_long < 0)
	{
		ft_putchar('-');
		nbr_long = -nbr_long;
	}
	i = 0;
	while (nbr_long > 0)
	{
		vet[i] = base[nbr_long % base_len];
		nbr_long = nbr_long / base_len;
		i++;
	}
	ft_print_vet_reverse(vet, i);
}
