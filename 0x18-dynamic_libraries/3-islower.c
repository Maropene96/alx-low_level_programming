#include "main.h"
/**
 * _islower - Shows if 1 character is lower case
 * Another cases, shows 0
 * @c: The character in ASCII code
 * Return: 1 for lowercase and 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
