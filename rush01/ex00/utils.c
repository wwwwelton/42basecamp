int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_space_number_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
		{
			if (str[i] == ' ' && str[i + 1] == ' ')
				return (0);
			i++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_count_check(int pos_str_in, int pos_str_fi, char value, char *str)
{
	int	count;
	int	i;

	count = 0;
	i = pos_str_in;
	while (i <= pos_str_fi)
	{
		if (str[i] == value)
			count++;
		i = i + 2;
	}
	return (count);
}

int	ft_valid_board(char *str)
{
	if (ft_count_check(0, 6, '1', str) != 1)
		return (0);
	if (ft_count_check(0, 6, '4', str) > 1)
		return (0);
	if (ft_count_check(8, 14, '1', str) != 1)
		return (0);
	if (ft_count_check(8, 14, '4', str) > 1)
		return (0);
	if (ft_count_check(16, 22, '1', str) != 1)
		return (0);
	if (ft_count_check(16, 22, '4', str) > 1)
		return (0);
	if (ft_count_check(24, 30, '1', str) != 1)
		return (0);
	if (ft_count_check(24, 30, '4', str) > 1)
		return (0);
	return (1);
}
