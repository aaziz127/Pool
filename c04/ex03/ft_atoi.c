

#include <stdio.h>
#include <unistd.h>

int	is_space(char c)
{
	char	*space;

	space = " \n\t\v\f\r";
	while (*space != '\0')
	{
		if (c == *space)
			return (1);
		space++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (count % 2 == 1)
		return (result * (-1));
	return (result);
}
