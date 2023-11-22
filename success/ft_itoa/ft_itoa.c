#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;

    if (nbr == -2147483648)
        return ("-2147483648");
    if (nbr < 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    char *str = (char *)malloc(len + 1);
    str[len] = '\0';
    if(nbr == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    if(nbr < 0)
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
