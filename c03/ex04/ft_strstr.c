// File: ft_strstr.c
/*
 * ft_strstr.c
 * 
 * This function locates the first occurrence of the null-terminated string to_find in the null-terminated string str.
 * 
 * Return: This function returns a pointer to the first character of the found string, or a null pointer if the string is not found.
 * 
 * */
/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j] && to_find[j] != '\0')
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char str[] = "Hello, World!";
	char to_find[] = "World";
	printf("ft_strstr: %s\n", ft_strstr(str, to_find));
	printf("strstr: %s\n", strstr(str, to_find));
	return (0);
}
*/
