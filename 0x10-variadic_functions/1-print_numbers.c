#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int b;

	va_start(valist, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && b < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
