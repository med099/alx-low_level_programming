#include <stdlib.h>
/**
 * _strlen - function that count lenght of string
 * @str: string
 * Return: lenght of string
*/
int _strlen(char *str)
{
	int i;

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

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = _strlen(s1);
	len += _strlen(s2);
	conc = malloc(sizeof(char) * len + 1);
	if (!conc)
		return (NULL);

	i = 0;
	while (*s1 && s1 != NULL)
	{
		conc[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 && s2 != NULL)
	{
		conc[i] = *s2;
		s2++;
		i++;
	}
	conc[i] = '\0';
	return (conc);
}
