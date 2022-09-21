#include "main.h"
#include <stdio.h>

/**
* *_strcat - called function
* @dest: destination parameter
* @src: source function
* return: a string
*/

char *_strcat(char *dest, char *src)
{
    int len = 0;
    while(dest[len])
        len++;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[len] = src[i];
        len += i;
    }
    dest[len] = '\0';

    return (dest);

}