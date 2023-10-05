#include "main.h"

/**
 * alloc_grid - startopoint
 * this is a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: this is the width
 * @height: this is a height of the dime.
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **m;

	m = malloc((height) * sizeof(*m));
	if (width <= 0 || height <= 0 || m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < height; i++)
		{
			m[i] = malloc(width * sizeof(**m));
			if (m[i] == 0)
			{
				while (i--)
					free(m[i]);
				free(m);
				return (NULL);
			}
			for (; j < width; j++)
				m[i][j] = 0;
		}
	}
	return (m);
}
