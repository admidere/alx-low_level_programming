#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size), left = 0, right = 0;

if (array == NULL || size == 0)
return (-1);

while (right < size && array[right] < value)
{
printf("Value checked array[%u] = [%d]\n", (unsigned int)right, array[right]);
left = right;
right += step;
}

right = (right >= size) ? size - 1 : right;

printf("Value found between indexes [%u] and [%u]\n",
(unsigned int)left, (unsigned int)right);

while (left <= right)
{
printf("Value checked array[%u] = [%d]\n", (unsigned int)left, array[left]);
if (array[left] == value)
return (left);
left++;
}

return (-1);
}
