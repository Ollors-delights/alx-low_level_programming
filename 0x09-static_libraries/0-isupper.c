#include "main.h"

/**
 * _isupper - program tells us that a char is an uppercase letter
 * @c: the char to be checked
 * Return: 1, if true or 0, if it is not an uppercase letter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
