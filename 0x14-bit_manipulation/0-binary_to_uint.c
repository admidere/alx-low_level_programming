#include "main_h"

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
	int i;

	if (!b)
	return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}
