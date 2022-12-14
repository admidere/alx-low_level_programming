#include "lists.h"

/**
* free_listint2 -  function that frees a listint_t list.
* @head: head of a list.
*
* Return: no return.
*/

void free_listint2(listint_t **head)
{
listint_t *nodes;
listint_t *ass;

if (head != NULL)
{
ass = *head;
while ((nodes = ass) != NULL)
{
ass = ass->next;
free(nodes);
}
*head = NULL;
}
}
