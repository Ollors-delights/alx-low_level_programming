#include "main.h"

/**
 * _memset - A program that fills a block of memory with a designated value
 * @s: the starting address of memory to be filled with a value
 * @b: the designated value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
