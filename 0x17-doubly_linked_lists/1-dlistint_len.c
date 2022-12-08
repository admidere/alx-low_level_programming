#include "lists.h"
/**
 *dlistint_len- print the number of linked list
 *@h: the ptr to doubly linked list
 *Return: the number of element in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
