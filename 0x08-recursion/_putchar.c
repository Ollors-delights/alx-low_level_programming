#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single char to stdout per time
 * @c: The character to print
 *
 * Return: 1 (success) else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
