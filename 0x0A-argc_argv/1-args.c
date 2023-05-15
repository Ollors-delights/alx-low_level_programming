#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the function that prints
 * the number of arguments passed to the program
 * @argc: number of arguments supplied in argv
 * @argv: array of arguments in a command line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
