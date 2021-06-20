void	ft_print_mat(int mat[4][4]);
void	ft_fill_zero_mat(int mat[4][4]);
int		ft_resolve_mat(int mat[4][4], char *str);
void	ft_putstr(char *str);

void	rush(char *str)
{
	int	mat[4][4];

	ft_fill_zero_mat(mat);
	if (ft_resolve_mat(mat, str) == 1)
		ft_print_mat(mat);
	else
		ft_putstr("Cannot solve Tower\n");
}
