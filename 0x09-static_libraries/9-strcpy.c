#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: where the string is copied to
 * @src: the address where the string is copied from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)

	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
