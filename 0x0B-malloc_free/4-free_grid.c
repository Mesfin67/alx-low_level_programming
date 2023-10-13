#include "main.h"
/**
 * free_grid - frees a 2D array of integers.
 *
 * This function frees the 2D array of integers pointed to by the `grid` parameter.
 * The `height` parameter specifies the height of the array.
 *
 * @grid: pointer to the 2D array of integers to be freed
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++) {
        free(grid[i]);
    }

    free(grid);
}

