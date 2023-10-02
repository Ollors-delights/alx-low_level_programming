#include "main.h"

/**
 * main - function prints the name of the program
 * @argc: number of arguments in a command line
 * @argv: array of arguments in a command line, of size argc
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
