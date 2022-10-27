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
int base = 1, i = 0;

if (b == NULL)
return (0);

while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}

while (i >= 0)
{
decimal += ((b[i] - '0') * base);
base *= 2;
i--;
}

return (decimal);
}
