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
		i++;
	}
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	signal;
	int	base_len;

	base_len = ft_len_check_base(base);
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
			nb = nb * base_len + (str[i] - '0');
			if (!ft_is_numeric(str[i + 1]))
				break ;
		}
		i++;
	}
	nb = nb * signal;
	return (nb);
}
