#include "lists.h"

/**
* pop_listint - a function that deletes
* the head node of a listint_t linked list,
* @head: head of a list.
* Return: head node's data.
*/

int pop_listint(listint_t **head)
{
int headnode;
listint_t *h;
listint_t *node = *head;

if (*head == NULL)
return (0);

headnode = node->n;

h = node->next;

free(node);

*head = h;

return (headnode);
}
