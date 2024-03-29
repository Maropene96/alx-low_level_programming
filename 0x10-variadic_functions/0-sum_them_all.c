#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: sum of parameters
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int b;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (b = 0; b < n; b++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
