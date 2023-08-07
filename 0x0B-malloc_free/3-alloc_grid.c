#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers, initialized to 0.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: NULL if @width or @height is 0 or negative,
 * or on the failure. Otherwise a pointer to a 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < heigth; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
