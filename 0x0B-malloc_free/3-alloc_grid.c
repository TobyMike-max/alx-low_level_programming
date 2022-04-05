#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initialized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_dim;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = malloc(sizeof(int *) * height);

	if (two_dim == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		two_dim[hgt_i] = malloc(sizeof(int) * width);
		if (two_dim[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(two_dim[hgt_i]);
			free(two_dim);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			two_dim[hgt_i][wid_i] = 0;
	}
	return (two_dim);
}
