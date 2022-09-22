#include "main.h"
#include <string.h>

/**
* _strncpy - function
* @dest: destination parameter
* @src: source parameter
* @n: n parameter
* returns: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
