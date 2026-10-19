int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	sign;

	index = 0;
	result = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\f'
	     || str[index] == '\r' || str[index] == '\v' || str[index] == '\t')
	{
		index++;
	}
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			sign = sign * -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	return (result * sign);
}
