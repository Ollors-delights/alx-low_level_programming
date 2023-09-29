#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string whose lenght is being calculated
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int ollor = 0;

	if (*s)
	{
		ollor++;
		ollor += _strlen_recursion(s + 1);
	}

	return (ollor);
}
