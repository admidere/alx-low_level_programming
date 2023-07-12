#include "search_algos.h"

/**
 * binary_search - function which is searching for desired valued in an array
 * using binary search algorithm
 * @array: array which is pointer to first index
 * @size: size of array
 * @value: desired value to search in an array
 * Return: the value of index if it is found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%lu", i);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (-1);
}
