#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - implement using binary serach
 * @array: points the first indexof an array
 * @size: size of an array
 * @value: desired value
 * Return: return index at desired value
*/

int binary_search(int *array, size_t size, int value)
{
    int i;
    int mid;
    int left = 0;
    int right = size - 1;
    if (array == NULL || size == 0)
    {
        return (-1);
    }
    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i != right)
            printf(", ");
        }
        printf("\n");
        mid = (left + right) / 2;
        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] > value)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return (-1);
}
