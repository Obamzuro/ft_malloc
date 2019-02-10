#include <unistd.h>
#include "/root/unit/ft_malloc/libft/include/libft.h"
#include "/root/unit/ft_malloc/ft_printf/include/ft_printf.h"

#define TINY 128
#define SMALL 

int main(int argc, char **argv)
{
	int	size1;
	int	size2;
	char	*ptr1;
	char	*ptr2;


	ft_printf("%d\n", getpagesize());
//	size1
//	ptr1 = (char *)mmap(NULL, size1, PROT_READ | PROT_WRITE,
//			MAP_PRIVATE | MAP_ANON, -1, 0);
//	ptr2 = (char *)mmap(NULL, size2, PROT_READ | PROT_WRITE,
//			MAP_PRIVATE | MAP_ANON, -1, 0);
}
