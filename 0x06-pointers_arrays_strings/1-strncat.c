#include "main.h"
#include <string.h>

/**
* _strncat - calling function
* @dest: destination parameter
* @src: source parameter
* @n: n parameter
* Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
