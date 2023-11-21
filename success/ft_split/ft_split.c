#include <stdlib.h>

char *ft_strcpyn(char *s1, char *s2, int size)
{
	int i = 0;

	while(i < size)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int	i;
	int	wc = 0;
	int j = 0;
	int k = 0;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **split = (char **)malloc((wc + 1) * sizeof(char *));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (j < i)
		{
			split[k] = (char *)malloc(sizeof(char) * (i - j + 1));
			ft_strcpyn(split[k++], &str[j], i - j);
		}
	}
	split[k] = NULL;
	return (split);
}
