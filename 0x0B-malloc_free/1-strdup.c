#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 *  allocated space in memory, which contains a copy
 * of the string given as a parameter
 * @str: string to coppy it
 * Return: pointer to the array, or NULL if it fails
*/
char *_strdup(char *str)
{
	int i;
	char *dup;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	if (i < 1)
		return (NULL);
	dup = malloc(sizeof(char) * i);
	if (!dup)
		return (NULL);
	i = 0;
	while (*str)
	{
		dup[i] = *str;
		str++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
