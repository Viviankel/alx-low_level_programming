#include "main.h"
#include <stdlib.h>

/**
 *  * free_grid - frees a 2 dimensional grid
 *   * Previously created  by your alloc_grid function
 *    * @grid: pointer
 *     * @height: integer
 *      * Return: Always 0, free memory
 *      **/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
