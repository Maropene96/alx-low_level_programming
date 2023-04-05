#include "variadic_functions.h"

/**
 * print_all -print anything
 * @format: list of types of arguments
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int b = 0, t, d = 0;
	char *l;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[b])
	{
		t = 0;
		while (t_arg[t])
		{
			if (format[b] == t_arg[t] && d)
			{
				printf(", ");
				break;
			} t++;
		}
		switch (format[b])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), d = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), d = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), d = 1;
				break;
			case 's':
				l = va_arg(valist, char *), d = 1;
				if (!l)
				{
					printf("(nil)");
					break;
				}
				printf("%s", l);
				break;
		} t++;
	}
	printf("\n");
	va_end(valist);
}

