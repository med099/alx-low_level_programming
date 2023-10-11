#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0;
 */

int main(void)
{
	long int n;
	long int fib;
	long int sum;

	n = 1;
	fib = 2;
	sum = 2;
	while (fib < 4000000)
	{
		fib += n;
		n = fib - n;
		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%ld\n", sum);
	return (0);
}
