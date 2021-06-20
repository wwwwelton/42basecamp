#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*addr2;
	int		size2;

	addr2 = addr;
	size2 = size;
	write(1, "42\n", 3);
	return (addr);
}
