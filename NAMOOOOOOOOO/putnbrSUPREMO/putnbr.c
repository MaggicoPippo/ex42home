#include <unistd.h>

void	ft_write_number(long number)
{	
	if (number > 9)
		ft_write_number(number / 10);
	char numbers[11] = "0123456789"; 
	write(1, &numbers[number % 10], 1);
}

void	ft_putnbr(int nb)
{
	long    number;

        number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	ft_write_number(number);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
