#include <unistd.h>

void	print_arg(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index ++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_arg(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
