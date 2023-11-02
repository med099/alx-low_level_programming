#include <stdlib.h>
/**
 * _calloc - function allocates memory and set memory to 0
 * @nmemb: number of elements
 * @size: sizeof(datatype)
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	i = 0;
	while (i < nmemb)
		p[i++] = 0;
	return (p);
}
