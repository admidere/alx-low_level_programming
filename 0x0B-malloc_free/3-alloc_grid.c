#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* alloc_grid -> string concatinating function
* @width: width parameter
* @height: height parameter
* Return: print 2d array
*/

int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **arr2d;

if (width <= 0 || height <= 0)
return (NULL);
arr2d = malloc(height * sizeof(int *));
if (arr2d == NULL)
{
free(arr2d);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr2d[i] = malloc(width * sizeof(int));
if (arr2d[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(arr2d[j]);
}
free(arr2d);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
arr2d[k][l] = 0;
}
return (arr2d);
}
