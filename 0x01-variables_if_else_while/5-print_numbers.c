#include <stdio.h>

/*
 *main - main
 * Description - Write a program that prints all
 *  single digit numbers of base 10 starting 
 *  from 0, followed by a new line.
 *  Return - 0
 */

int main(void)
{
	int n;
	n = 0;

	while (n <= 9)
	{
	printf("%i",n);
	n++;
	}
	putchar('\n');
	return (0);
}	
