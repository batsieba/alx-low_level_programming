#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as parameter on each element of array
 * @array: the array to be executed
 * @size: size of array
 * @action: pointer to function to be used
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
