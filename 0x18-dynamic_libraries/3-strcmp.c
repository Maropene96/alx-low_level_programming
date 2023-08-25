#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: return 0 if both s1 and s2 are the same
 * different number if they are not
 */

int _strcmp(char *s1, char *s2)
{
	int t = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + t) == '\0') && (*(s2 + t) == '\0'))
			break;
		op = *(s1 + t) - *(s2 + t);
		t++;
	}

	return (op);
}
