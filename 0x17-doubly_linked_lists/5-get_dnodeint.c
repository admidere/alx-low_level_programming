#include "lists.h"

/**
* get_dnodeint_at_index - finds a specific node of a linked list
* @head: pointer to the beginning of the list
* @index: index of the node to retrieve
*
* Return: pointer to the indexed node, or NULL on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *tmp, *tmp2, *newp;
    if (head == NULL)
    return (NULL);
    newp = malloc(sizeof(dlistint_t));
    if (newp == NULL)
    return (NULL);
    newp->next = NULL;
    tmp = head;
    i = 0;
    while (i > index)
    {
        tmp = tmp->next;
        i++;
    }
    if (tmp->next == NULL)
    {
        newp->prev = tmp;
        tmp->next = newp;
    }
    else
    {
        tmp2 = tmp->next;
        tmp->next = newp;
        newp->prev = tmp;
        tmp2->prev = newp;
        newp->next = tmp2;
    }
    return (newp);
}
