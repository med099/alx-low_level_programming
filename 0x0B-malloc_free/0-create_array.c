#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char
 * @size: size of arry
 * @c: character to initialize arry with it
 * Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
		arr[i++] = c;
	arr[i] = '\0';
	return (arr);
}
