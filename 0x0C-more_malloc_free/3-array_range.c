#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: first value of array.
* @max: last value of array.
* Return: If min > max or
* the function fails - NULL.
*/

int *array_range(int min, int max)
{
int *ar, i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ar = malloc(sizeof(int) * size);

if (ar == NULL)
return (NULL);

i = 0;
while (i < size)
{
ar[i] = min++;
i++;
}
return (ar);
}
