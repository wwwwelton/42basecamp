#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min > max)
	{
		range[0] = NULL;
		return (0);
	}
	i = 0;
	if (min < max)
	{
		range[0] = malloc(sizeof(int) * (max - min));
		if (range == NULL)
			return (-1);
		while (min < max)
		{
			range[0][i] = min;
			min++;
			i++;
		}
	}
	return (i);
}
