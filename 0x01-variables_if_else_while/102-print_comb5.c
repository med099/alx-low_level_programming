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
	int n, m, l, o;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '8'; m++)
		{
			l = n;
			for (l; l <= '9'; l++)
			{
				for (o = m + 1; o <= '9'; o++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(l);
					putchar(o);
					if (n != '9' || m != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

