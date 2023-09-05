#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **num;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	num = malloc(height * sizeof(int *));

	if (num == NULL)
	{
		free(num);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		num[i] = malloc(width * sizeof(int));
		if (num[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(num[i]);
			free(num);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			num[i][j] = 0;
		}
	}
	return (num);
}
