#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte or NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int t, k;

	for (t = 0; *(s + t) != '\0'; t++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + t) == *(accept + k))
				return (s + t);
		}
	}
	return ('\0');
}
