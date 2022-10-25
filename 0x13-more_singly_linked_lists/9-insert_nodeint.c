#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node
* at a given position.
* @head: head of a list.
* @idx: index of the list where the new node is
* added.
* @n: integer element.
*
* Return: the address of the new node, or NULL if it
* failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ptr2 = malloc(sizeof(listint_t));
listint_t *ptr = *head;
ptr2->n = n;
ptr->link = NULL;

if (ptr == NULL && idx != 0)
return (NULL);

if (ptr2 == NULL)
return (NULL);

idx--;
while(idx != 1)
{
ptr = ptr->next;
idx--;
}
ptr2->next = ptr->next;
ptr->next = ptr2;

i = 0;
while (ptr != NULL)
{
ptr = ptr->link;
ptr->n = n;
}
return (ptr);
}
