#include "main.h"

/**
 * main - program that prints the number of arguments passed to the program
 * @argc: number of arguments in a command line
 * @argv: array of arguments in a command line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
