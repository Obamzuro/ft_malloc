#include <sys/mman.h>
#include <unistd.h>
#include "/root/unit/ft_malloc/include/ft_malloc.h"
#include "/root/unit/ft_malloc/libft/include/libft.h"
#include "/root/unit/ft_malloc/ft_printf/include/ft_printf.h"

#define TINY 128
#define SMALL getpagesize()
#define ALLOC_AM 100

void	init_alloc_zones(void)
{
	t_malloc	
}

int		main(int argc, char **argv)
{
	int		size1;
	int		size2;
	char	*ptr1;
	char	*ptr2;

	ft_printf("%d\n", getpagesize());
	size1 = (ALLOC_AM / (getpagesize() / TINY) + 1) * getpagesize();
	size2 = ALLOC_AM * SMALL;
	ptr1 = (char *)mmap(NULL, size1, PROT_READ | PROT_WRITE,
			MAP_PRIVATE | MAP_ANON, -1, 0);
	ptr2 = (char *)mmap(NULL, size2, PROT_READ | PROT_WRITE,
			MAP_PRIVATE | MAP_ANON, -1, 0);

	ft_printf("size1 = %d\nsize2 = %d\n", size1, size2);

	init_alloc_zones();
}
