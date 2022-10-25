#include "lists.h"

/**
* reverse_listint - function that reverses
* a listint_t linked list.
* @head: head of a list.
* Return: a pointer to the first node 
* of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	prev = NULL;
	current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (*head);
}
