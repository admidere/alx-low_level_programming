#include "main.h"

#include <stdio.h>

/**
* swap_int - called function
* @a: first parameter
* @b: second parameter
* replace intiger use pointer
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
