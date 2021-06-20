void	ft_print_error(void);
int		rush(char *str);
int		ft_validate_input(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2 || ft_validate_input(argv[1]) == 0)
	{
		ft_print_error();
		return (0);
	}
	rush(argv[1]);
	return (0);
}
