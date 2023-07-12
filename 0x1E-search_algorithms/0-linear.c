#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - function th at return index of located value in an array
 * @array: pointer to first value
 * @size: size of array
 * @value: value to search
 * Return: return index which is located desire value
 * otherwise reurn -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
