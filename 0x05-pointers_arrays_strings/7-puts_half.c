#include "main.h"
/**
 * puts_half - Function that print a string
 * @str: string to print it
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 != 0)
		i--;
	i = i / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
