#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase
 * @c: the character to be checked check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
