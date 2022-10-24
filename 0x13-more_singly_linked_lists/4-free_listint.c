#include "lists.h"

/**
* free_listint -  function that frees a listint_t list.
* @head: head of a list.
*
* Return: no return.
*/

void free_listint(listint_t *head)
{
listint_t *nodes;

while ((nodes = head) != NULL)
{
head = head->next;
free(nodes);
}
}
