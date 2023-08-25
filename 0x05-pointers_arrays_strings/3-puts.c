#include "main.h"
/**
* _puts - prints a string and new line
* @str: string
* Return: no return
*/
void _puts(char *str)
{
	int t = 0;

	while (count >= 0)
	{
		if (str[t] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[t]);
		t++;
	}
}
