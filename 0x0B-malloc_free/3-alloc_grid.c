#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 *  a 2 dimensional array of integers.
 * @width: width of array of integers
 * @height: height of array of integers
 * Return: a pointer to a 2 dimensional array of
 *  integers or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	i = 0;
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;	
			}
			return (NULL);
		}
		i++;
	}
	return (arr);
}
