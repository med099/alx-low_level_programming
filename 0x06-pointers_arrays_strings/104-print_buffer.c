#include <stdio.h>
/**
 * is_printable - check character if he is printble
 * @c: charcter
 * Return: 0 or 1
*/
int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/**
 * print_buffer - Print the contents of a character buffer in a formatted way.
 * @b: The input buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (is_printable(b[i + j]))
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	}
	else
		printf("\n");
}
