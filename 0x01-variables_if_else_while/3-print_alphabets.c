#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

int main(void)
{
    
    
	char capital;
	char small = 'a';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	capital = 'A';
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;

	}

	putchar('\n');
    return 0;
}
