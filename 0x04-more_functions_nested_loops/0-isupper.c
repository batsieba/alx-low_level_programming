/**
	 * This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 *
	 * _isupper :  checks if letter is alphabet
	 * @c - parameter to check
	 * Return -  returns 1 is alphabet is capital or 0 if not
	 * .
	 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
