#include "main.h"
/**
 * print_last_digit - print last digit.
 *@i: find last digit.
 * Return: last digit.
 */
int print_last_digit(int i)
{
	int n;

	if (i == –2147483648)
	{
		_putchar(56);
		return (8);
	}
	if (i < 0)
		i = i * -1;
	n = (i % 10) + 48;
	_putchar(n);
	return (i % 10);
}
