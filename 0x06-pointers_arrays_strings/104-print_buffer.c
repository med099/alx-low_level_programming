#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			printf(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			printf(c[l * 10 + k]);
		else
			printf('.');
	}
}

/**
 * print_buffer - Print the contents of a character buffer in a formatted way.
 * @b: The input buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
			print_line(b, 9, i);
		else
			print_line(b, size % 10 - 1, i);
		printf('\n');
	}
	if (size == 0)
	printf('\n');
}
