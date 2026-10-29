#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	if (min <= max)
		size = max - min + 1;
	else
		size = min - max + 1;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		if (min > max)
			min--;
		else
			min++;
		i++;
	}
	return (range);
}
