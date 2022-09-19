#include "main.h"

/**
 *_strlen - function returns the length of a string
 * @s: pointer parameter
 *Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
