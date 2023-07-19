#include "main.h"

/**
 * print_alphabet - check the code for ALX School students.
<<<<<<< HEAD
 * Return -0
 *
 * */
void print_alphabet(void)
{
    char alpha='a';
    int i;
  while(alpha<='z')
    {
      putchar(alpha);
      alpha++;
    }
  putchar('\n');
    return 0;
=======
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

>>>>>>> e877e63e1b25a5f68d02885b0b4e09bfaffd9dd1
}
