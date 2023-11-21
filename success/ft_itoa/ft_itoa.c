#include <stdlib.h>
// #include <limits.h>
// #include <stdio.h>

char	*ft_itoa(int nbr)
{
	char	c;
	int len = 0;
	int n = nbr;

	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
		len++;
	while (n)
	{
		n /=10;
		len++;
	}
	char *str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = 0;
		return(str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return(str);

}
// #include <limits.h>

// int main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MIN));
// }