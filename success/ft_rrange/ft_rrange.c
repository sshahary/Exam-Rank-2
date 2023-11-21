#include <stdlib.h>

int	absolut(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_rrange(int start, int end)
{
	int size = absolut(start - end);
	int i = 0;

	if (start > end)
		return (ft_rrange(end, start));
	int *range = (int *)malloc((size + 1) * sizeof(int));
	if (!range)
		return (NULL);
	while (size >= 0)
	{
		range[i] = end;
		end--;
		i++;
		size--;

	}
	return (range);
}

// #include<stdio.h>
// int main()
// {
//     int start = -1;
//     int end = 2;

//     int *result = ft_rrange(start, end);

//     if (result == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Reversed range from %d to %d:\n", start, end);
//     for (int i = 0; i <= absolut(start - end); i++)
//     {
//         printf("%d ", result[i]);
//     }

//     // Don't forget to free the allocated memory
//     free(result);

//     return 0;
// }
