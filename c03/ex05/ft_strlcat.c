//ft_strlcat reproduces the behavior of the function strlcat.
/*
 * ft_strlcat.c
 * 
 * This function appends a copy of the null-terminated string src to the end of the null-terminated string dest, 
 * then adds a terminating '\0'. The string dest must have enough space to hold the result.
 * 
 * The ft_strlcat() function appends not more than size - strlen(dest) - 1 characters from src, and then adds a terminating '\0'.
 * 
 * Return: This function returns the total length of the string it tried to create.
 * 
 * */
/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (size <= i)
	{
		j += size;
	}
	else
	{
		j += i;
	}
	while (src[k] != '\0' && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int main()
{
	char dest[100] = "ABC";
	char src[] = "DEFGHIJKL";
	printf("ft_strlcat: %u\n", ft_strlcat(dest, src, 5));
	char dest2[100] = "ABCDEF";
	char src2[] = "DEFGHIJKL";
	printf("strlcat: %lu\n", strlcat(dest2, src2, 5));
	return (0);
}
*/
