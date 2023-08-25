#include "main.h"
/**
 * _strspn - gets the length of a prefix string
 * @s: string
 * @accept: accepted target bytes.
 * Return: the number of matched bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, k, bool;

	for (t = 0; *(s + t) != '\0'; t++)
	{
		bool = 1;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + t) == *(accept + k))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (t);
}
