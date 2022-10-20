#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - a function that adds a new node
* @head: The main linked list
* @str: The string to add to the node
* Return: NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;

if (head != NULL && str != NULL)
{
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);

newnode->str = strdup(str);
newnode->len = _strlen(str);
newnode->next = *head;

*head = newnode;

return (newnode);
}

return (0);
}

/**
* _strlen - length of a string
* @s: The String to count
* Return: String length
*/
int _strlen(const char *s)
{
int count = 0;

while (*s)
{
s++;
count++;
}

return (count);
}
