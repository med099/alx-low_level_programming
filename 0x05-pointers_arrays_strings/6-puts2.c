#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *  starting with the first character
 * @str: string to print it
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
