#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of a substring 
 */

char *_strstr(char *haystack, char *needle)
{
	int t = 0, k, l;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[t] != '\0')
	{

		if (haystack[t] == needle[0])
		{
			l = i, k = 0;

			while (needle[k] != '\0')
			{
				if (haystack[l] == needle[k])
				l++, k++;

				else
				break;
			} 

			if (needle[k] == '\0')
			{
				return (haystack + t);
			}
		}

		t++;
	}

	return (NULL); 
}
