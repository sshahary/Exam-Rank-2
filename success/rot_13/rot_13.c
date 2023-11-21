#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			str[i] = 'm';
		else if (str[i] == 'Z')
			str[i] = 'M';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + (str[i] + 13 - 'a') % 26;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + (str[i] + 13 - 'A') % 26;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
		rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
