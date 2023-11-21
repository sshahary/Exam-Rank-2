#include <unistd.h>

void	reverse(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
	{
		write(1, &str[i], 1);
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
		reverse(argv[1]);
	write(1, "\n", 1);
	return (0);
}
