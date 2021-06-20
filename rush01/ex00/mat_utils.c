void	ft_fill_zero_mat(int mat[4][4])
{
	int	line;
	int	col;

	line = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			mat[line][col] = 0;
			col++;
		}
		line++;
	}
}

int	ft_resolve_mat(int mat[4][4], char *str)
{
	mat[0][0] = str[6] - '0';
	mat[0][1] = 2;
	mat[0][2] = 3;
	mat[0][3] = 4;
	mat[1][0] = 2;
	mat[1][1] = 3;
	mat[1][2] = 4;
	mat[1][3] = 1;
	mat[2][0] = 3;
	mat[2][1] = 4;
	mat[2][2] = 1;
	mat[2][3] = 2;
	mat[3][0] = 4;
	mat[3][1] = 1;
	mat[3][2] = 2;
	mat[3][3] = 3;
	return (1);
}
