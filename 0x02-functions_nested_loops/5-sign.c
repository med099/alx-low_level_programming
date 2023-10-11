#include <unistd.h>
/**
 * print_sign - check lower case character
 *@n: character to check it
 * Return: 1 or 0.
 */
int	print_sign(int n)
{
	if (n > 0)
	{
		write(1, '+', 1);
		return (1);
	}
	if (n == 0)
	{
		write(1, '0', 1);
		return (0);
	}
	if (n < 0)
	{
		write(1, '-', 1);
		return (-1);
	}
}
