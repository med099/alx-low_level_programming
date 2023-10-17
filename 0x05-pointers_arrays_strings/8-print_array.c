#include <stdio.h>
/**
 * print_array -  function that prints n elements of an array of integers
 * @a: arry of int
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n != 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
