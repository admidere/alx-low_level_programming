#include <stdlib.h>
#include "dog.h"

/**
 * _copy  -Make a copy
 * @sr: Data
 * Return: Pointer
 */

char *_copy(char *sr)
{
char *p;
int i, l;

if (sr == NULL)
{
return (NULL);
}

for (l = 0; sr[l] != '\0'; l++)
;

p = malloc(sizeof(char) * (l + 1));

if (p == NULL)
{
return (NULL);
}

for (i = 0; sr[i] != '\0'; i++)
{
p[i] = sr[i];
}

p[i] = '\0';
return (p);
}

/**
 * new_dog - Create a new dog variable
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *s;
char *n_name, *n_owner;

if (name == NULL || owner == NULL)
{
return (NULL);
}

s = malloc(sizeof(dog_t));
if (s == NULL)
{
return (NULL);
}

n_name = _copy(name);
if (n_name == NULL)
{
free(s);
return (NULL);
}
(*s).name = n_name;

(*s).age = age;

n_owner = _copy(owner);
if (n_owner == NULL)
{
free((*s).name);
free(s);
return (NULL);
}
(*s).owner = n_owner;

return (s);
}
