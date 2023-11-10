#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_str - check string if is NULL
 * @str: string to check it
 * Return: string or "(nil)" if string is NULL
*/
char *check_str(char *str)
{
	if (str)
		return (str);
	return ("(nil)");
}

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	i = 0;
	va_start(args, n);
	while (i < n)
	{
		printf("%s", check_str(va_arg(args, char*)));
		if (i + 1 < n && separator)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
}
