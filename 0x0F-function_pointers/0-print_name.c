#include "function_pointers.h"

/**
 * print_name - print a name
 * @name:display name
 * @f:the pointer pointer
 *Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f)
		return;

	f(name);
}
