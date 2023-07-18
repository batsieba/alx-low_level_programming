#include "main.h"

/*
 * print_alphabet - check the code for ALX School students.
 * Return -0
 *
 * */

void print_alphabet(void)
{
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i = 0 ; i < sizeof(alpha) ; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
