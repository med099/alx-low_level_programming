#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: pointer to a 2 dimensional array of integers
 * @height: height of arry
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
