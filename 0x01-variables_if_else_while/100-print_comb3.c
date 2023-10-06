#include <stdio.h>

/**
 * main - entry
 *
 * Discription: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

