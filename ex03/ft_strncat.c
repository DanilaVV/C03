#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char	s1[10] = "Danila ";
	char	s2[10] = "Vozniuk";
	//puts(strncat(s1, s2, 5));
	puts(ft_strncat(s1, s2, 5));
	return (0);
}
