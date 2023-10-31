#include <stdlib.h>

/**
 * _strncpy - function to coppy string
 * @s1: source
 * @s2: dest
 * @n: num
 * Return: pointer to string
*/
char *_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

/**
 * _strcmp - function that compares two strings
 * @s1: first strinf
 * @s2: second string
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * strtow - function that splits a string into words
 * @str: string to split it
 * Return: a pointer to an array of strings (words) or NULL
*/
char	**strtow(char *str)
{
	int i;
	int j;
	int k;
	int wc;
	char **out;

	i = j = k = wc = 0;
	if (str == NULL || _strcmp("", str) == 0)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		j = i;
		while (str[i] && str[i] != ' ')
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}
