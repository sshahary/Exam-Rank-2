
#include <stdio.h>
//  #include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// int main()
// {
// 	printf("%lu\n", ft_strcspn("abcd333", "33ced"));
// 	printf("%lu\n", strcspn("abcd333", "33ced"));
// }
