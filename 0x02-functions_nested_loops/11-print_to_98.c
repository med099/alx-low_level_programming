#include <stdio.h>
/**
 * print_to_98 - print from number n to 98.
 * @n: first number.
 * Return: Void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("98\n");
}
