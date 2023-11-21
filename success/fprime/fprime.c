#include<stdlib.h>
#include<stdio.h>

void	fprime(int nbr)
{
	int	i;

	i = 1;
	if (nbr == 1)
		printf("1");
	while (nbr >= i)
	{
		if (nbr % i == 0 && i != 1)
		{
			printf("%d", i);
			if (nbr == i)
				break ;
			nbr = nbr / i;
			printf("*");
			i = 1;
		}
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
