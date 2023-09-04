#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of function and initialize with a
 * specific char
 * @size: size of array created
 * @c: char for initialization
 * Return: Null of size 0 or pointer to array otherwise
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
