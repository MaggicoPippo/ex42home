//It must allocate with malloc an array of integers, min included max excluded
//The size of the array must be returned or -1 on error.
//If min greater than or equal to max, range will point to NULL and return 0.


#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i = 0;
	int	size = 0;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!(*range))
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
