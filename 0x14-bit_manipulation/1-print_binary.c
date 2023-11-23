#include "main.h"
/**
 * print_binary - that prints the binary representation of a number
 * @n: number
*/
void print_binary(unsigned long int n)
{
	static int zero;

	if (!n)
	{
		if (!zero)
		_putchar('0');
		return;
	}
	zero = 1;
	print_binary(n / 2);
	_putchar(48 + (n % 2));
}
