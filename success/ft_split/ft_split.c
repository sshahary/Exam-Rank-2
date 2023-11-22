#include <stdlib.h>


char *ft_strncpy(char *s1, char *s2, int len)
{
    int i;

    i = 0;
    while (i < len && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
char    **ft_split(char *str)
{
    int i;
    int j;
    int k = 0;
    int wc = 0;

    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i])
            wc++;
        while(str[i] && (str[i] != ' ' && str[i] != '\t'))
            i++;     
    }
    char **split = (char **)malloc((wc + 1)*sizeof(char *));
    if (!split)
        return NULL;
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        j = i;
        while(str[i] && (str[i] != ' ' && str[i] != '\t'))
            i++;     
        if (j < i)
        {
            split[k] = (char *)malloc(i - j + 1);
            ft_strncpy(split[k++], &str[j], i - j);
        }
    }
    split[k] = NULL;
    return (split);
    
}