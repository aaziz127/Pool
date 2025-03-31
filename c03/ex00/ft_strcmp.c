
/*
#include <stdio.h>
*/
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char s1[] = "ABC";
	char s2[] = "AB";
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("strcmp: %d\n", strcmp(s1, s2));
	return (0);
}
*/
