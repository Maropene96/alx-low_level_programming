#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant memory byte
 * @n: bytes of memoty filled.
 * Return: the pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		*(s + t) = b;

	return (s);
}
