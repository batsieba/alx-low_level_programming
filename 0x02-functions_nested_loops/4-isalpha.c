#include "main.h"

/**
 * _isalpha(int c)- checks if c is letter
 * Returns - 1 if c is letter or 0 if anything else
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
