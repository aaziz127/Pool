
int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
