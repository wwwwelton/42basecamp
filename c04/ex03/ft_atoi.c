int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_char_is_valid(char c)
{
	if (c != '-' && c != '+' && c != ' ' && !ft_is_numeric(c))
		return (1);
	return (0);
}

int	ft_str_is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_valid(str[i]))
			return (0);
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == str[i + 1])
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	signal;

	if (!ft_str_is_valid(str))
		return (0);
	signal = 1;
	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			signal = -signal;
		if (ft_is_numeric(str[i]))
		{
			nb = nb * 10 + (str[i] - '0');
			if (!ft_is_numeric(str[i + 1]))
				break ;
		}
		i++;
	}
	nb = nb * signal;
	return (nb);
}
