#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: pointer shall point to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	str = malloc(sizeof(char) * (i + n) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i++] = *s1;
		s1++;
	}
	while (n > 0)
	{
		str[i++] = *s2;
		s2++;
		n--;
	}
	str[i] = '\0';
	return (str);
}
