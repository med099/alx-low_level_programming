#include "main.h"
/**
 * _puts - Function that print a string
 * @str: string to print it
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
