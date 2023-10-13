#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int line;

	if (size <= 0)
	{
		_putchar('\n');
		return (0);
	}
	j = size - 1;
	line = 1;
	while (line <= size)
	{
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		j = size - 1;
		i = 0;
		while (i < line)
		{
			_putchar('#');
			i++;
		}
		j -= i;
		line++;
		_putchar('\n');
	}
	return (0);
}
