#include <stdio.h>
#include <stdlib.h>

void fprime(char *str)
{
    int i;
    int nbr = atoi(str);
    if(nbr == 1)
        printf("1");
    i = 1;
    while(nbr >= i)
    {
        if(nbr % i == 0 && i != 1)
        {
            printf("%d", i);
            if(nbr == i)
                break;
            printf("*");
            nbr /= i;
            i = 1;
        }
        i++;
    }
    

}
int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        fprime(argv[1]);
    }
    printf("\n");
    return (0);
}