#include <unistd.h>

void	test(void)
{
	write(1, &"a", 1);
}

int	main(void)
{
	test();
	return(0);
}
