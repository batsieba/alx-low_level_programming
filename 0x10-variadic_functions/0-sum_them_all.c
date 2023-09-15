#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: arguments passed
 * @...: a variable number of parameters
 * Return: int sum of arguments
 * if n==0 -0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
