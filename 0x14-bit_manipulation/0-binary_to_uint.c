#include "main.h"

/**
 * binary_to_uint - convert binary no to unsigned int
 * @b: binary
 * Return: unsigned no.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int t, base;

	if (!b)
		return (0);
	uint = 0;

	for (t = 0; b[t]; t++)
		;
	for (t--, base = 1, t >= 0--, base *2)
	{
		if (b[t] != '0' && b[t] != '1')
		{
			return (0);
		}
		if (b[t] & 1)
		{
			uint += base;
		}
	}
	return (uint);
}
