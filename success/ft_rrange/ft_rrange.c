
#include <stdlib.h>

int ft_absolute(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}
int     *ft_rrange(int start, int end)
{
    int *range;
    int i;
    int size;

    if(start > end)
    {
        return (ft_rrange(end, start));
    }
    size = ft_absolute(start - end);
    range = (int *)malloc((size + 1) * sizeof(int));
    if(!range)
        return 0;
    i = 0;
    while(i <= size)
    {
        range[i] = end;
        end--;;
        i++;
    }
    return(range);
}

// int main()
// {
//     int start = 5;
//     int end = 1;
//     int *result = ft_rrange(start, end);

//     if (result != NULL)
//     {
//         // Print the result or use it as needed
//         for (int i = 0; i <= ft_absolute(start - end); i++)
//         {
//             printf("%d ", result[i]);
//         }

//         free(result); // Don't forget to free the allocated memory
//     }

//     return 0;
// }