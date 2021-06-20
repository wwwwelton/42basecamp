int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_numeric(str[i]))
		{
			i++;
			continue ;
		}
		else
		{
			return (0);
			break ;
		}
	}
	return (1);
}
