#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*str;

	if (**strs == 0)
		return (0);
	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght = lenght + ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + ((size - 1) * ft_strlen(sep));
	str = malloc(sizeof(char) * (lenght) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i++ < size)
	{
		ft_strcat(str, strs[i - 1]);
		if ((i - 1) < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
