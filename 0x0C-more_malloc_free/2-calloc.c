#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory, using malloc.
* @nmemb: The number of elements.
* @size: The byte size.
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
char *f;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

m = malloc(size * nmemb);

if (m == NULL)
return (NULL);

f = m;

i = 0;
while (i < (size * nmemb))
{
f[i] = '\0';
i++;
}
return (m);
}
