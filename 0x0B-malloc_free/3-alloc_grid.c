#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns pointer to a 2-D array of int
*@width: width of the 2D array
*@height:height of the 2D array
*Return:if width || height <= 0 or function fails- NULL
*	otherwise return pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
	int **twoD;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(height * sizeof(int *));

	if (twoD == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoD[height_index] = malloc(sizeof(int) * width);

		if (twoD[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoD[height_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoD[height_index][width_index] = 0;
	}

	return (twoD);
}
