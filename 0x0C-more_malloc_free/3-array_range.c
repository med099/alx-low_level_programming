#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: int min
 * @max: int max
 * Return: the pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int i;
	int *range;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	range = malloc(sizeof(int) * i);
	if (!range)
		return (NULL);
	i = 0;
	while (min <= max)
		range[i++] = min++;
	return (range);
}
