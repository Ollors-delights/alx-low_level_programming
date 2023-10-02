#include "main.h"

/**
 * main - prints the minimum no. of coins to make change for an amount of money
 * @argc: number of arguments in a command line
 * @argv: array of arguments in a command line
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, x, result;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= change[x])
		{
			result++;
			num -= change[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
