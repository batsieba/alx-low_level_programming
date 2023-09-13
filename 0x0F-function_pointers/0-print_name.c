#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name: argument passed
 * @f: pointer function passed as argument
 * Return: NULL (on failure), name passed(on success)
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
