
int		max(int* tab, unsigned int len)
{
    int           num;
    unsigned int  i;

    if (!tab)
        return (0);
    i = 0;
    num = tab[0];
    while(len > i)
    {
        if (tab[i] > num)
            num = tab[i];
        i++;
    }
    return(num);
}

// #include <stdio.h>
// int main()
// {
//     int arr1[] = {10, 5, 8, 12, 7};
//     unsigned int len1 = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {-3, -8, -2, -11, -5};
//     unsigned int len2 = sizeof(arr2) / sizeof(arr2[0]);

//     int arr3[] = {100, 200, 300, 400, 500};
//     unsigned int len3 = sizeof(arr3) / sizeof(arr3[0]);

//     // Test case 1
//     printf("Max in arr1: %d\n", max(arr1, len1));

//     // Test case 2
//     printf("Max in arr2: %d\n", max(arr2, len2));

//     // Test case 3
//     printf("Max in arr3: %d\n", max(arr3, len3));

//     return 0;
// }