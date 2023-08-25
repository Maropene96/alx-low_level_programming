#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination.
 * @src: source string
 *  @n: number of bytes used
 *  Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int r = 0, t = 0;

	while (*(dest + r) != '\0')
	{
		r++;
	}

	while (t < n)
	{
		*(dest + r) = *(src + t);
		if (*(src + t) == '\0')
			break;
		r++;
		t++;
	}
	return (dest);
}
