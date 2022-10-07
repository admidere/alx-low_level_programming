#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: the number that allocat memory
* Return: void
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
