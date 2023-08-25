#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;

	while (t >= 0)
	{
		*(dest + t) = *(src + t);
		if (*(src + t) == '\0')
			break;
		t++;
	}
	return (dest);
}
