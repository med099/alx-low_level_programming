#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print character
 * @c: character
*/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print integer
 * @i: print integer
*/
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_str -print string
 * @s: string
*/
void print_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_float - print float
 * @f: float
*/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - function that prints anything
 * @format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	_Form form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};
	int i, j;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form[j].type)
			{
				form[j].f(args);
				printf(", ");
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
