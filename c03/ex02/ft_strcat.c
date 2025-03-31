
/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i = 0;
	int	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char src[] = "DEF";
	printf("ft_strcat: %s\n", ft_strcat(dest, src));
	char dest2[100] = "ABCDEF";
	char src2[] = "DEFGHIJKL";
	printf("strcat: %s\n", strcat(dest2, src2));
	return (0);
}
*/
