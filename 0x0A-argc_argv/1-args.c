#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: is the number of argument passed to program
 * @argv: is array of the arguments
 * Return: Always 0(Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /*Ignor argv*/
printf("%d\n", argc - 1);
return (0);
}
