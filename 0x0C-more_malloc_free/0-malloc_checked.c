#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - it allocates memory using malloc
 * @b: the argument to be assigned
 * Return: pointer to memory(on Success), 98 (on failure)
*/
void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
