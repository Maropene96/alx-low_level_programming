#include "main.h"
/**
 * _strlen - the length of a string
 * @s: string
 * Return: int t
 */
int _strlen(char *s)
{
	int t = 0;

	while (*(s + t) != '\0')
		t++;
	return (t);
}
