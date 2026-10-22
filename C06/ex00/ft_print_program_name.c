#include <unistd.h>

void	ft_print_program_name(char *str)
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
	if (argc  == 1)
		ft_print_program_name(argv[0]);
	else
		write(1, "\n", 1);
	return (0);
}
