
int	is_prime(int num)
{
	long	i;
	long	temp;

	i = 2;
	if (num <= 1)
		return (0);
	if (num == 2)
		return (1);
	while (1)
	{
		if (num % i == 0)
			return (0);
		temp = i * i;
		if (temp > num)
			break ;
		i++;
	}
	return (1);
}
