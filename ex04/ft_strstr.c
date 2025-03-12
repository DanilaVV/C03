#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = &str[i];
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				res = &str[i];
			j++;
		}
		else
			j = 0;
		if (to_find[j] == '\0')
			return (res);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char s1[10] = "Danila";
	char s2[10] = "il";
	puts(ft_strstr(s1, s2));
	puts(strstr(s1, s2));
	return (0);
}*/
