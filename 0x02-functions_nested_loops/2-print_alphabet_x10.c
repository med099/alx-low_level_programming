#include "unistd.h"

/**
 * print_alphabet - print alphabet * 10.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char a;
	int i;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			write(1, &a, 1);
			a++;
		}
		write(1, "\n", 1);
		i++;
	}
}

