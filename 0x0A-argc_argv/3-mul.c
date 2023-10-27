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
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
