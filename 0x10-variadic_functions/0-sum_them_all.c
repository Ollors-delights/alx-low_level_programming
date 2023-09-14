#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function calculates the sum of all paramters passed to it
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mysum;
	unsigned int i, sum = 0;

	va_start(mysum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mysum, int);

	va_end(mysum);

	return (sum);
}
