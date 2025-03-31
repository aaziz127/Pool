
//ft_strlen.c
/*
 * ft_strlen.c
 * 
 * This function calculates the length of the string str, excluding the terminating null byte ('\0').
 * 
 * Return: This function returns the number of characters in the string str.
 * 
 * */

#include <unistd.h>
/*
#include <stdio.h>
#include <string.h>
*/

int ft_strlen(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char str[] = "Hello, World!";
	printf("ft_strlen: %d\n", ft_strlen(str));
	printf("strlen: %lu\n", strlen(str));
	return (0);
}
*/
