#include <stdio.h>
#include "main.h"

/**
 * main - adds all positive numbers.
 * @argc: is the number of argument passed to program
 * @argv: is array of the arguments
 * Return: result (Success), 0(no number), 1(if no number)
*/

int main(int argc, char *argv[])
{
if (argc == 1){
    printf("%d\n",0);
}

int i, sum, n;
for(i = 1; i < argc; i++)
{
if(isdigit(argv[i]))
{
n = _atoi(argv[i]);
sum+= n;
}
else
{
printf("Error\n");
return (1);
}
    
}

printf("%d\n",sum);
return (0);
}