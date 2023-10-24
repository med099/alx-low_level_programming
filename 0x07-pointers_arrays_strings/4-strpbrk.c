#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: array of caracteres to compare with 's'
 * Return: a pointer to the byte in s that matches one of
 *  the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
