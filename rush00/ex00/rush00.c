void	ft_putchar(char c);

void	check_and_print(int x, int y, int column, int line)
{
	if (column == 1 && line == 1)
		ft_putchar('o');
	else if (column == x && line == 1)
		ft_putchar('o');
	else if (column == 1 && line == y)
		ft_putchar('o');
	else if (column == x && line == y)
		ft_putchar('o');
	else if (line == 1 || line == y)
		ft_putchar('-');
	else if (column == 1 || column == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	column;
	int	line;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			check_and_print(x, y, column, line);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
