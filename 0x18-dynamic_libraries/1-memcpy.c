#include "main.h"
/**
 * _memcpy - copies memory area src to memory area dest
 * @dest : destination of memory area.
 * @src: source 
 * @n: number of bytes filled.
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		*(dest + t) = *(src + t);

	return (dest);
}
