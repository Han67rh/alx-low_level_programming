#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates grids
 * @width: the width
 * @height: the height
 * Return: a pointer
 */
int **alloc_grid(int width, int height)

{
	int **list;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	list = malloc(sizeof(int *) * height);
	if (list == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		list[i] = malloc(sizeof(int) * width);
		if (list[i] == NULL)
		{
			for (; i >= 0; i--)
				free(list[i]);
			free(list);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			list[i][j] = 0;
	}
	return (list);
}
