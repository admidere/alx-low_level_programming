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
	int decimal = 0, base = 1, rem;

	if (b != "0" || b != "1" || b == NULL)
	return (0);

	while (b != 0)
	{
		rem = b % 10;
		decimal = decimal + rem * base;
		b = b / 10;
		base = base * 2;
	}

	return (decimal);

}
