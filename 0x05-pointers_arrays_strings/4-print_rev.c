#include "main.h"
/**
 * print_rev - Function that print a string in reverse
 * @s: string to print her reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
