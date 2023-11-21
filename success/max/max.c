
int	max(int* tab, unsigned int len)
{
	int	num;
	int	i;

	i = 0;
	num = tab[0];
	while (i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}