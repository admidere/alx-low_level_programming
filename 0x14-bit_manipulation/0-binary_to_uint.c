#include "main.h"

/**
* binary_to_uint - function that converts
* a binary to decimal
* @b: binary
* return: converted number
* fail - if binary if null and
* different from 0 and 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, base;

	if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	            ;
	
	for (i--, base = 1; i >= 0; i--, base *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
		return (0);
		}
		if (b[i] & 1)
		{
		decimal += base;
		}
	}

	return (decimal);
}
