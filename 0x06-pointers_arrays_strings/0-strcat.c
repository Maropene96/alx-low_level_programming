#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination of string
 * @src: source string
 * Return: the pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, t;

	while (dest[length])
		length++;

	for (t = 0; src[t] != 0; t++)
	{
		dest[length] = src[t];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
}
