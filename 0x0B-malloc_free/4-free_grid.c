#include "main.h"

/**
 * free_grid - startpoint
 * this is a c fuction that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: this is the prev function array
 * @height: this is the heigth that want to free it
*/

void free_grid(int **grid, int height)
{
	free(grid);
}
