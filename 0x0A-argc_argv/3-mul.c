#include <stdio.h>
#include "main.h"
#include "_atoi.c"

/**
 * main - prints a multiple of two numbers
 * @argc: is the number of argument passed to program
 * @argv: is array of the arguments
 * Return:  multiple of two numbers(Success)
 *  Error (Failure)
*/

int main(int argc, char *argv[])
{

if (argc == 3)
{
int multiple_two_nums, num1, num2;
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
multiple_two_nums = num1 *num2;
printf("%d\n", multiple_two_nums);
return (0);
}
else
{
printf("Error\n");
return (1);
}

}
