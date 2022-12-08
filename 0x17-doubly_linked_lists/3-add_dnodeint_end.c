#include "lists.h"
#include <stdlib.h>
/**
*add_dnodeint_end-insert node at the end of listed
*@head: a ptr to the doubly linked list
*@n: data
*Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
    dlistint_t *temp, *forward;

    if (head == NULL)
    return (NULL);
    temp = malloc(sizeof(dlistint_t))
    if (temp == NULL)
    return (NULL);

    temp->next = NULL;
    temp->prev = NULL;
    temp->n = n;

    if (*head == NULL)
    {
    temp->prev = NULL
    *head = temp
    return (temp)
    }

    forward = *head;
    while (forward->next != NULL)
    {
    forward = forward->next
    }
    forward->next = temp;
    temp->prev = forward
    return (temp);
}
