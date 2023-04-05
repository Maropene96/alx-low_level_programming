#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed
 * @n: num of strings
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int b;
	char *l;

	va_start(valist, n);

	for (b = 0; b < n; b++)
	{
		l = va_arg(valist, char *);

		if (l)
			printf("%s", l);
		else
			printf("(nil)");
		if (b < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
