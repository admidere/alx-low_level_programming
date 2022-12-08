#include "lists.h"

/**
* get_dnodeint_at_index - finds a specific node of a linked list
* @head: pointer to the beginning of the list
* @index: index of the node to retrieve
*
* Return: pointer to the indexed node, or NULL on failure
*/
int sum_dlistint(dlistint_t *head);
{
    int sum = 0;
    if (head == NULL)
    return (0);
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);

}