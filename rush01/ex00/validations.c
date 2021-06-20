int	ft_strlen(char *str);
int	ft_space_number_valid(char *str);
int	ft_valid_board(char *str);

int	ft_validate_input(char *argv)
{
	if (ft_strlen(argv) != 31)
		return (0);
	if (ft_space_number_valid(argv) == 0)
		return (0);
	if (ft_valid_board(argv) == 0)
		return (0);
	return (1);
}
