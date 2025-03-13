#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	l = i;
	while (src[j] && j + l + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < l)
		return (size + ft_strlen(src));
	else
		return (i - 1 + ft_strlen(src));
}
/*int	main(void)
{
	char s1[10] = "Danila";
	char s2[10] = "Vozniuk";
	int res;

	res = strlcat(s1, s2, 8);
	puts(s1);
	printf("%d", res);
	return (0);
}*/
