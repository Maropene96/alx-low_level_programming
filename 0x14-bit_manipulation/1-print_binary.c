#include "main.h"
/**
 * print_binary - print rhe binary represantation
 * @n:unsigned long number
 * Return:no return.
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
