#include "search_algos.h"
#include "stdio.h"

/**
 * linear_search - implement searching each element
 * untile found desired value
 * @array: pointer at first element of list
 * @size: size of an array
 * @value: desired value
 * Return: return index where found desired value
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (!array)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}