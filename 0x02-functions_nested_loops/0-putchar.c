#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[]="_putchar";
	int i;
	for(i=0;i<sizeof(word); i++)
	{
		_putchar(word[i]);
	}
	_putchar("\n");
	return (0);
}
