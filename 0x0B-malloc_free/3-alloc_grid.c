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
int i, j, arr2d;
if (width <= 0 || height <= 0)
return (NULL);
arr2d = malloc(width * height * sizeof(int));
if (arr2d == NULL)
free(arr2d);
return (NULL);

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
arr2d[i][j] = 0;
}
return (arr2d);
}