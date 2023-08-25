#include "main.h"
/**
 *_abs - Computes the absolute value of an integer
 *@i: number of an integer.
 *Return:returns absolute value of an int
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		i *= -1;
		return (i);
	}
}
