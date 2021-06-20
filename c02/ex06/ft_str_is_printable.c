int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
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
