#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to the array elements
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array && action)
		for (b = 0; b < size; b++)
			action(array[b]);
}
