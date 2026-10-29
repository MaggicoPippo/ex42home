int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long	result;
	
	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || str[i] > 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
	{	
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}


//Rispetta la funzione atoi del man, ma se la stringa in input é del tipo "    ---++--+1234abc"
//allora bisogna cambiare gli if ed else if dei segni e usare un ciclo while finche il carattere
//corrente é uguale a + o - e con un if interno fare sign *= -1 ogni volta che il carattere
//corrente é un meno. Il resto della funzione resta invariato. LONG invece di INT per result
//permette di gestire casi di interi molto grandi come int_max e int_min se richiesto, 
//se non  richiesto si puó utilizzare un tipo int per la corretta funzione del programma.
