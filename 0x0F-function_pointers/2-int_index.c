#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp:pointer to the function
 * Return: returns the index of the first element
 * If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (b = 0; b < size; b++)
			if (cmp(array[b]))
				return (b);
	}
	return (-1);
}
