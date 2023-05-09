#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - searches for a value in an array of integers
* using the Linear search algorithm
* @array: pointer to the first element of the array to search
* @size: number of elements in the array
* @value: value to search for
*
* Return: the index of the value if found, -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (!array)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
