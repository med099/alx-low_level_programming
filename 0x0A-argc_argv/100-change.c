#include <stdio.h>
/**
 * _atoi -  function that convert a argument to an integer.
 * @num: argument
 * Return: return integer
 */
int _atoi(char *num)
{
	int i, n;

	i = 0;
	n = 0;
	if (num[i] == '-')
	{
		n = -1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		n *= 10;
		n += (num[i] - '0');
		i++;
	}
	return (n);
}

/**
 * main - program that prints the minimum number of coins to
 *  make change for an amount of money
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int amount_of_mon, num_coin, rest;

	if (argc == 2)
	{
		amount_of_mon = _atoi(argv[1]);
		if (amount_of_mon <= 0)
		{
			printf("0\n");
			return (0);
		}
		num_coin = amount_of_mon / 25;
		rest = amount_of_mon % 25;
		num_coin += rest / 10;
		rest %= 10;
		num_coin += rest / 5;
		rest %= 5;
		num_coin += rest / 2;
		rest %= 2;
		num_coin += rest / 1;
		printf("%d\n", num_coin);
		return (0);
	}
	printf("Error\n");
	return (1);
}
