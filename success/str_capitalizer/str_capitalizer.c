
#include <unistd.h>


void str_captal(char *str)
{
    int i;

    i = 0;
    while(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;    
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
    
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if(argc > 1)
    {
        while(argc > i)
        {
            str_captal(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}