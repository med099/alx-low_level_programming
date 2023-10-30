#include <stdlib.h>
/**
 * _strlen - function that count lenght of string
 * @str: string
 * Return: lenght of string
*/
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to the array, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len += _strlen(s2);
	conc = malloc(sizeof(char) * len + 1);
	if (!conc)
		return (NULL);

	i = 0;
	while (*s1)
	{
		conc[i] = *s1;
		s1++;
		i++;
	}
	conc[i] = '\n';
	i++;
	while (*s2)
	{
		conc[i] = *s2;
		s2++;
		i++;
	}
	conc[i] = '\0';
	return (conc);
}

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: pointer to argument
 * Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	i = 1;
	while (i < ac)
	{
		str = str_concat(av[i], av[i + 1]);
		i++;
		av[i] = str;
	}
	return (str);
}
