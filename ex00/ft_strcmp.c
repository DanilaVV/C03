#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
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
	res = strcmp(s1, s2);
	//res = ft_strcmp(s1, s2);
	printf("%d\n", res);
	return (0);
}
