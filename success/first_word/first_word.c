#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
