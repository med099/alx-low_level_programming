#include <stdio.h>
/**
 * main - programme that prints the first 50 Fibonacci numbers
 * Return: 0;
 */

int main(void)
{
	long int n;
	long int fib;
	int fifty;

	n = 1;
	fib = 2;
	fifty = 48;
	printf("1, ");
	while (fifty > 0)
	{
		printf("%ld, ", fib);
		fib += n;
		n = fib - n;
		fifty--;
	}
	printf("%ld\n", fib);
	return (0);
}
