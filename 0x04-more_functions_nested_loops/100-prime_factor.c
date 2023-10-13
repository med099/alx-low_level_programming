#include <stdio.h>
/**
* main - finds and prints the largest prime factor
* of the number 612852475143.
* Return: 0
*/
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i < n)
	{
		if (n % i == 0)
			n = n / i;
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
