#include "main.h"
/**
 *_isalpha - Show 1 if letter is lowercase
 * other cases, shows 0
 *@c: The character on ASCII code
 *Return: 1 for letters and 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
