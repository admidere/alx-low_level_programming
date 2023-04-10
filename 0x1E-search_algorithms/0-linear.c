#include "search_algos.h"
#include "stdio.h"
#include "stdlib.h"

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
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}
