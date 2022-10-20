#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - a function that returns the number
* @h: linked list
*
* Return: The number of elements
*/

size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h)
{
h = h->next;
nodes++;
}

return (nodes);
}
