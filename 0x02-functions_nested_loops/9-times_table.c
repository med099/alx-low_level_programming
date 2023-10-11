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
		timen = 1;
		_putchar('0');
		_putchar(',');
		while (timen < 10)
		{
			res = n * timen;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + 48);
				if (timen != 9)
					_putchar(',');
				else
					_putchar('\n');
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
				if (timen != 9)
					_putchar(',');
				else
					_putchar('\n');
			}
			timen++;
		}
		n++;
	}
}
