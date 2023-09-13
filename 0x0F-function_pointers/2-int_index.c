#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: the array passed on
 * @size: size of the array
 * @cmp: pointer to the funtion to be used to compare values
 * Return: index of the first element for which the cmp
 * function doesnt return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
