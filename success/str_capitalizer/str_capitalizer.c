#include <unistd.h>

void	str_capital(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
	write(1, &str[0], 1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -=32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	int i = 1;

	if (ac > 1)
	{
		while (i < ac)
		{
			str_capital(argv[i]);
			write(1, "\n", 1);
			i++;
		}

	}
	else
		write(1, "\n", 1);
	return (0);
}
