#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_mat(int mat[4][4])
{
	int	line;
	int	col;

	line = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(mat[line][col] + '0');
			if (col != 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
