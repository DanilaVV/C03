#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
int	main(void)
{
	int res;
	char *s1 = "Dana";
	char *s2 = "Dana";
	//res = strncmp(s1, s2, 10);
	res = ft_strncmp(s1, s2, 10);
	printf("%d\n", res);
	return (0);
}
