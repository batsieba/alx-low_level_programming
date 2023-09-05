#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of program
 * @ac: size of av
 * @av: array of words
 * Return: Null(on failure), Pointer to the new string(on success)
 * NB, each argument followed by new line
*/
char *argstostr(int ac, char **av)
{
int i, j;
int c, r = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
char *result;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
c++;
}
}
result = malloc(sizeof(char) * (c + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
result[r] = av[i][j];
r++;
}

if (result[r] == '\0')
{
result[r++] = '\n';
}
}
return (result);
}
