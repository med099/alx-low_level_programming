#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argum
 * Return: sum of argument
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	i = 0;
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}
