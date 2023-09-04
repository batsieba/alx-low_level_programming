#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: array of 0s of width x height(on success),
 * on failure, return NULL
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
