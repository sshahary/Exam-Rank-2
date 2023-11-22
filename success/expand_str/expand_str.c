#include <unistd.h>

void expandstr(char *str)
{
    int i;
    int flag;
    
    i = 0;

    while(str[i])
    {
        if ((str[i] == ' ' || str[i] == '\t'))
            i++;
        while(str[i])
        {
            if ((str[i] == ' ' || str[i] == '\t'))
                flag = 1;
            if (!(str[i] == ' ' || str[i] == '\t'))
            {
                if(flag)
                    write(1, "   ", 3); 
                write(1, &str[i], 1);
                flag = 0;         
            }
            i++;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        expandstr(argv[1]);
    }
    write(1, "\n", 1);
    return(0);
}