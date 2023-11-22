#include <unistd.h>

// void rostring(char *str)
// {
//     int i;
//     int flag = 0;
//     i = 0;
//     int start;
//     int end;

//     while(str[i] == ' ' || str[i] == '\t')
//         i++;
//     start = i;
//     while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
//         i++;
//     end = i; 
//     while (str[i] == ' ' || str[i] == '\t')
//         i++;
//     while(str[i])
//     {
//         while((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i + 1] == '\t'))
//             i++;
//         if (str[i] == ' ' || str[i] == '\t')
//             flag = 1;
//         if  (!(str[i] == ' ' || str[i] == '\t'))
//         {
//             if(flag)
//                 write(1, " ", 1);
//             flag = 0;
//             write(1, &str[i], 1);
//         }
//         i++;
//     }
//     if (end != ' ')
//         write(1, " ", 1);
//     while (start < end)
//     {
//        write(1, &str[start], 1);
//         start++;
//     } 
      

// }

// int main(int argc, char *argv[])
// {
//     if(argc > 1)
//     {
//         rostring(argv[1]);
//     }
//     write(1, "\n", 1);
//     return (0);
// }

int main (int ac , char **av)
{
	int i = 0;
	int j;

	if (ac >= 2)
	{
		
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t')) // search for is_space and move the position.
			{
				i++;
			}
			j = i; // this is the postion of starting of the word.
			while (av[1][i])
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')) // find the next word.
				{
					i++;
				}
				while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t')) // find the next word.
				{
					i++;
				}
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t') && (av[1][i -1] == ' ' || av[1][i - 1] == '\t')) // print the word till it reaches last.
				{
					while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
					{
						write (1, &av[1][i], 1);
						i++;
					}
					write (1, " ", 1);
					i++;
				}
			}
			while (av[1][j] && (av[1][j] != ' ' && av[1][j] != '\t')) // print the first word now.
			{
				write (1, &av[1][j], 1);
				j++;
			}
	}
	write (1, "\n", 1);
}