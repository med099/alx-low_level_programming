#include <unistd.h>
/**
 * print_last_digit - print last digit.
 *@i: find last digit.
 * Return: last digit.
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
		i = i * -1;
	n = (i % 10) + 48;
	write(1, &n, 1);
	return (i % 10);
}
