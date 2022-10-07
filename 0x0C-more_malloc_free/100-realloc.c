#include "main.h"
#include <stdlib.h>

/**
* _realloc - function reallocates a memory block using malloc and free
* @ptr: A pointer to the memory previously allocated.
* @old_size: The size in bytes of the allocated space for ptr.
* @new_size: The size in bytes for the new memory block.
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *memory;
char *p, *fil;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
memory = malloc(new_size);

if (memory == NULL)
return (NULL);

return (memory);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

p = ptr;
memory = malloc(sizeof(*p) * new_size);

if (memory == NULL)
{
free(ptr);
return (NULL);
}

fil = memory;

i = 0;
while (i < old_size && i < new_size)
{
fil[i] = *p++;
i++;
}
free(ptr);
return (memory);
}
