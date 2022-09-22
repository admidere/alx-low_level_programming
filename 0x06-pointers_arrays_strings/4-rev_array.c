#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
int j = n-1;

while (j >=0)
{
if (j != n-1)
{
printf(", ");
}
printf("%d", a[j]);
j--;
}
printf("\n");
}
