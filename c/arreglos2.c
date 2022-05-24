#include <stdio.h>
#define MAXLIN 1000 /* tamaño máximo de la línea de entrada */
int getlin(char line[], int maxline);
void copy(char to[], char from[]);
/* imprime la línea de entrada más larga */
int main( )
{
    int len; /* longitud actual de la línea */
    int max; /* máxima longitud vista hasta el momento */
    char line[MAXLIN]; /* línea de entrada actual */
    char longest[MAXLIN]; /* la línea más larga se guarda aquí */
    max = 0;
    while ((len = getlin(line, MAXLIN)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

    if (max > 0) /* hubo una línea */
        printf("\n%s", longest);
    return 0;
}


/* getline: lee una línea en s, regresa su longitud */
int getlin(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar( )) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
