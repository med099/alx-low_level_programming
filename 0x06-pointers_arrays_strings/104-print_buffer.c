#include <stdio.h>
/**
 * print_buffer - Print the contents of a character buffer in a formatted way.
 * @b: The input buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size && isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
