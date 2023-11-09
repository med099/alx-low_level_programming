#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program that perfroms simple operation
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*opfunc)(int, int);
	int n1, n2, res;

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opfunc = get_op_func(argv[2]);

	if (!opfunc)
	{
		printf("Error\n");
		return (-1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (-1);
	}

	res = func(n1, n2);

	printf("%d\n", res);

	return (0);
}
