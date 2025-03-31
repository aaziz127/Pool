
/* 
 * ft_strncat.c
 * 
 * This function appends a copy of the null-terminated string src to the end of the null-terminated string dest, 
 * then adds a terminating '\0'. The string dest must have enough space to hold the result.
 * 
 * The ft_strncat() function appends not more than n characters from src, and then adds a terminating '\0'.
 * 
 * Return: This function returns a pointer to the resulting string dest.
 * 
 * */
/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[100] = "ABC";
	char src[] = "DEFGHIJKL";
	printf("ft_strncat: %s\n", ft_strncat(dest, src, 5));
	char dest2[100] = "ABCDEF";
	char src2[] = "DEFGHIJKL";
	printf("strncat: %s\n", strncat(dest2, src2, 5));
	return (0);
}
*/
