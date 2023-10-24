#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: arry two dimension
 * @size: size
*/

void print_diagsums(int *a, int size)
{
	int i, left, right;

	left = 0;
	right = 0;
	for (i = 0; i < (size * size); i += size + 1)
		left += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		right += a[i];
	printf("%d, %d\n", left, right);
}
