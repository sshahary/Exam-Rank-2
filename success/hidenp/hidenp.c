#include <unistd.h>

void	hidenp(char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i] && b[j])
	{
		if (a[i] == b[j])
			i++;
		j++;
	}
	if (a[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);

}

int	main(int ac, char *argv[])
{
	if (ac == 3)
	{
		hidenp(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}