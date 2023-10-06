#include <stdio.h>

/**
 * main - entry
 *
 * Discription: prints all possible different combinations
 * of two-digits numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
				{
					putchar('0' + n1 / 10);
					putchar('0' + n1 % 10);
					putchar(' ');
					putchar('0' + n2 / 10);
					putchar('0' + n2 % 10);
					if (n1 != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
			n2++;
		}
		n1++;
	}

	putchar('\n');
	return (0);
}

