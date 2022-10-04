#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array - creat an array of char
* initialize with specfic character
* @size: size of an array
* @c: string parameter
* return: array of string
* return : null if size is 0
* if it fails it will print NULL
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
