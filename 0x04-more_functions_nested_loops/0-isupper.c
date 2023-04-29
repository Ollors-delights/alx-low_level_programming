#include "main.h"

/**
 * _isupper - check if character is  uppercase letter
 * @c: The character to be checked
 * Return: 1 if character is uppercase or 0 if character is lowercase
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

