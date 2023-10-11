#include <stdio.h>
/**
 * main - programme that comput the sum of all
 * the multiples of 3 and 5 below 1024.
 * Return: 0;
 */

int main(void)
{
	int n;
	int sum;

	n = 0;
	sum = 0;
	while (n <= 1024)
	{
		if (n % 15 == 0)
			sum += n;
		else if (n % 5 == 0)
			sum += n;
		else if (n % 3 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
