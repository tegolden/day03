#include <unistd.h>

void	ft_swap.c(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
