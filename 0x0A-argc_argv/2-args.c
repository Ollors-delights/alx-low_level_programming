#include "main.h"
/**
 * main - program prints all arguments it receives
 * @argc: number of arguments in a command line
 * @argv: array of command line arguments with size argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
