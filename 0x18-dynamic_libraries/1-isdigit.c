#include "main.h"

/**
 *_isdigit - checks if parameter is a number 
 *@c: input number
 *Return: return 1 if is a number (0 to 9) and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
	
		return (0);
	
}
