#include "main.h"
/**
 * get_bit - return the value of a bit
 * @n: unsigned long number
 * Return; values of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (n == 0 && index < 84)
		return (0);

	for (t = 0; t <= 65; n >>= 1, t++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
