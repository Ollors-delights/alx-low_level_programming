#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string variable length whose length is to be calculated
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
			s++;
	}
	return (longi);
}
