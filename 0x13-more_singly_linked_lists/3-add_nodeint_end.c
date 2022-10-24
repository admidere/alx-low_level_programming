#include "lists.h"

/**
* add_nodeint_end - add a new node at the end
* of a linked list
* @head: head of a list.
* @n: n element.
* Return: address of the new element. NUll if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *end = *head;

(void)end;

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
}
else
{
while (end->next != NULL)
end = end->next;
end->next = newnode;
}

return (*head);
}
