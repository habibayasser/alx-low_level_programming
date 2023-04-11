#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a
 * 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return:  return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array2D;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		array2D[hgt] = malloc(sizeof(int) * width);

		if (array2D[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(array2D[hgt]);

			free(array2D);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			array2D[hgt][wid] = 0;
	}

	return (array2D);
}
