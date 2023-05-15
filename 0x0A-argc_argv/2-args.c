#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the function
 * @argc: number of arguments in argv
 * @argv: a vector of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
