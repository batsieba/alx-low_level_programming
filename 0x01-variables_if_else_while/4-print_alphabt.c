#include <stdio.h>

/*
 *main - main block
 *Description: Print the alphabet on a line omitting e and q
 *Return 0
 *
 */

int main(void)
{

	char alpha = 'a';
	while (alpha <= 'z')  
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}

