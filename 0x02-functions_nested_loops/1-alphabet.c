#include "main.h"

/*
 * print_alphabet - check the code for ALX School students.
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
}
