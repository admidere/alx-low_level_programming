#include "main.h"

/**
 * create_array - creat an array
 * @size: size of an array
 * @c: string parameter
 * return: array of string
 * if it fails it will print NULL
 */

char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;
    if (size == 0)
        return (null);
    arr = malloc(sizeof(char) * size);
    
    for (i = 0; i < size; i++)
        arr[i] = c;
    return (arr);
}
