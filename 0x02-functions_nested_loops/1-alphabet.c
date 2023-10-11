#include "unistd.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
	write(1, &a, 1);
	a++;
	}
	write(1, "\n", 1);
}
