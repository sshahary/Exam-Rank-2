
int	ft_atoi(const char *str)
{
    int i;
    int sign = 1;
    int res;

    i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
        i++;
    if (str[i] == '-')
    {
        sign = -sign;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res *sign);
}
