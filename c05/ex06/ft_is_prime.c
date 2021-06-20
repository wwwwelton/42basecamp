int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 2;
	while (i <= nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
