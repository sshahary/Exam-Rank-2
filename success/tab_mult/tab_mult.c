#include <unistd.h>

int	ft_atoi(char *str)
{
	int s = 1;
	int	i = 0;
	int	r = 0;

	if (str[i] == '-')
	{
		s = -s;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}

void ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr / 10 > 0)
	{
		ft_putnbr(nbr / 10);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);

}

int main(int ac, char *argv[])
{
	int n;
	int i = 1;
	if (ac == 2)
	{
		n = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}