int	ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]))
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
			if (!ft_is_alpha(str[i - 1]) && !ft_is_numeric(str[i - 1]))
				if (ft_is_lowercase(str[i]))
					str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
