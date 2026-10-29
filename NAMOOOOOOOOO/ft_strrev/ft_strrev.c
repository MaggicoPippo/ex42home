//Write a function that reverse a string.
//You must not create a second string but reverse the original one.


char	*ft_strrev(char *str)
{
	int	i = 0;
	int	j = 0;
	char	temp;

	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
