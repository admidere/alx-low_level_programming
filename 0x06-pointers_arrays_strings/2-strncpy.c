#include "main.h"
#include <string.h>

/**
*  _strncpy - C function that copies a string,
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
