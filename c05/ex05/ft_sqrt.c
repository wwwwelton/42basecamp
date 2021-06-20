int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
