#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string needed to find its location in memory
 * Return: NULL if string is null, pointer to duplicate(on success)
*/
char *_strdup(char *str)
{
char *new_str;
int i, c;
if (str == NULL)
{
return (NULL);
}

c = 0;
while (str[c] != '\0')
{
c++;/**will store length of str*/
}

new_str = malloc(sizeof(char) * (c + 1));

if (new_str == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
new_str[i] = str[i];
}

return (new_str);


}
