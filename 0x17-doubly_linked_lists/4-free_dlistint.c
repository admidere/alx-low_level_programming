#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint- free memory
 *@h: the ptr to doubly linked list
 *Return: the number of element in the doubly linked list
 */
 void free_dlistint(dlistint_t *head);
 {
     dlistint_t *tmp;
     while (head != NULL)
     {
         tmp = head->next;
         free(head);
         head = tmp;
     }
 }
