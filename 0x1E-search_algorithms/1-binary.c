#include "search_algos.h"

/**
 * binary_search -  value in a sorted array of integers
 * @array:  pointer to the first element of the array
 * @size: size of an array
 * @value: value to search for
 * return: return the index where value is located
 * otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
        size_t mid, left, right, i;

        if (array == NULL)
        {
                return (-1);
        }

        left = 0;
        right = size - 1;
        while(left <= right)
        {
                mid = (right + left) / 2;

                printf("Searching in array: ");
                for (i = left; i <= right; i++)
                {
                        if (i != right)
                        {
                                printf("%d, ", array[i]);   
                        }
                        else
                        {
                                printf("%d\n", array[i]);
                        }
                }
                if (array[mid] == value)
                {
                        return mid;
                }
                else if (array[mid] < value)
                {
                        left = mid + 1;
                }
                else
                {
                        right = mid - 1;
                }
        }
        return (-1);
}
