#include <stdlib.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area s
 * @b: costant byte
 * @n: number of bytes to set it
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}

/**
 * _calloc - function allocates memory and set memory to 0
 * @nmemb: number of elements
 * @size: sizeof(datatype)
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, size * nmemb);
	return (p);
}
