#include "main.h"
/**
 * times_table - print the 9 time table.
 *
 * Return: Void.
 */

void times_table(void)
{
	int n;
	int timen;
	int res;

	n = 0;
	while (n < 10)
	{
		timen = 0;
		putchar(' ');
		while (timen < 10)
		{
			res = n * timen;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
			}
			timen++;
		}
		n++;
		_putchar('\n');
	}
}
