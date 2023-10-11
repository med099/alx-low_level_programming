#include "main.h"
/**
 * _print - print res < 10
 * @res: resulte of times
 * Return: Void.
 */

void _print(int res)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(res + 48);
}

/**
 *__print - print res < 10
 *@res: resulte of times
 *Return: Void.
 */
void __print(int res)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(res / 10 + 48);
	_putchar(res % 10 + 48);
}

/**
 *___print - print res < 10
 *@res: resulte of times
 *Return: Void.
 */
void ___print(int res)
{
	_putchar(' ');
	_putchar(res / 100 + 48);
	_putchar((res / 10) % 10 + 48);
	_putchar(res % 10 + 48);
}

/**
 * print_times_table - print n times table, starting with 0
 * @n: n times
 * Return: Void.
 */
void print_times_table(int n)
{
	int nton;
	int timen;
	int res;

	nton = 0;
	if (n > 0 && n <= 15)
	{
		while (nton <= n)
		{
			timen = 1;
			_putchar('0');
			_putchar(',');
			while (timen <= n)
			{
				res = nton * timen;
				if (res < 10)
					_print(res);
				else if (res < 100)
					__print(res);
				else if (res >= 100)
					___print(res);
				if (timen != n)
					_putchar(',');
				else
					_putchar('\n');
				timen++;
			}
			nton++;
		}
	}
	else if (n == 0)
		_putchar('0');
	else
		return;
}
