#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	flg;

	i = 0;
	if ((str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t'))
			flg = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (flg)
				write(1, " ", 1);
			write(1, &str[i], 1);
			flg = 0;
		}
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
