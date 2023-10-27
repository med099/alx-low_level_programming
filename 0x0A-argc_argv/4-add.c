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
 * its_number - function that check argment it number or not
 * @ac: argument count
 * @av: argument vectors
 * Return: 0 or 1
 */
int its_number(int ac, char **av)
{
	int i, j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

/**
 * main -  program that adds positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	i = its_number(argc, argv);
	if (i == 1)
	{
		printf("Error\n");
		return (1);
	}

	while (++i < argc)
		sum += _atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
