#include <stdio.h>

int main() {
    // Write C code here
    

	char small = 'a';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	char capital = 'A';
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;

	}

	putchar('\n');
    return 0;
}
