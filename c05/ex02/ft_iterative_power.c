int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb;
		i = 1;
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
