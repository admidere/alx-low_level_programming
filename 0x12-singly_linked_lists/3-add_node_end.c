#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - function that adds a new node
* at the end of a list_t list
* @head: The main linked list
* @str: string to add to the node
*
* Return: NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list, *node;

if (str != NULL)
{
new_list = malloc(sizeof(list_t));
if (new_list == NULL)
return (NULL);

new_list->str = strdup(str);
new_list->len = _strlen(str);
new_list->next = NULL;

if (*head == NULL)
{
*head  = new_list;
return (*head);
}
else
{
node = *head;
while (node->next)
node = node->next;

node->next = new_list;
return (node);
}
}

return (NULL);
}

/**
* _strlen - The length of a string
* @s: A string to count
* Return: String length
*/
int _strlen(const char *s)
{
int c = 0;

while (*s)
{
s++;
count++;
}

return (count);
}
