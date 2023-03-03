#include <unistd.h>
#include <stdlib.h>

void	ft_print_comb2(void)
{
	int *	a;
	int *	b;
	int *	c;

	a = rand();
	b = rand();
	c = (&a, &b);
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
