#include "main.h"
/**
 * _atoi - it converts a string to an integer.
 * @s: string
 * Return: value of an  integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, r = 0, t = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			t *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		r = r + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (r * t);

}
