#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	start;
	int	end;
	int	flg;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
			i--;
		end = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i--;
		start = i + 1;
		flg = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (flg)
			write(1, " ", 1);
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
