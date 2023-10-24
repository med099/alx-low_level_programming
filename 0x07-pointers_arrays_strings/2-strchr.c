#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string s
 * @c: character to locate it in 's'
 * Return: a pointer to the matched character or NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
