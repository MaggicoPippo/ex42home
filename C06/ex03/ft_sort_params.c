#include <unistd.h>

void    ft_sort_params(char *str)
{
        int     index;

        index = 0;
        while (str[index])
        {
                write(1, &str[index], 1);
                index++;
        }
        write(1, "\n", 1);
}

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int    main(int argc, char **argv)
{
    int        i;
    int        j;
    char    *temp;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        ft_sort_params(argv[i]);
        i++;
    }
    return (0);
}


AGGIUNGERE FUNZIONE PER ORDINARE ARGOMENTI COSI DA RISPARMIARE RIGHE NEL MAIN E SOSTITUIRLO, MA SOLUZIONE CORRETTA.
