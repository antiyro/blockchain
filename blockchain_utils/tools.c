#include "../blockchain.h"

void ft_clean_stdin(void)
{
    int c;

    while (c != '\n' && c != EOF)
        c = getchar();
}

int     ft_isequal(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    if (s2[i] != '\0')
        return (0);
    return (1);
}