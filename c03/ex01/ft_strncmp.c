
/*
#include <stdio.h>
#include <string.h>
*/
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char s1[] = "ABCDZEF";
	char s2[] = "ABCDEFTH";
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: %d\n", strncmp(s1, s2, 5));
	return (0);
}
*/
