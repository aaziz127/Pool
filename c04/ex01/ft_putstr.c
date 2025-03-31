
//ft_putstr.c
//This function displays a string of characters on the standard output.
/*
 * ft_putstr.c
 * 
 * This function displays a string of characters on the standard output.
 * 
 * */

#include <unistd.h>
/*
#include <stdio.h>
#include <string.h>
*/

void ft_putstr(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	char str[] = "Hello, World!";
	ft_putstr(str);
	return (0);
}
*/
