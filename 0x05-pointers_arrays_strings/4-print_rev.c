#include "main.h"
/**
 * print_rev - Function that print a string in reverse
 * @s: string to print her reverse
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
