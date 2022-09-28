#include "main.h"

/**
* factorial - function that can be
* the factorial
* @n: n parameter
* Return: the result of factorial.
*/

int factorial(int n)
{
if (n == 0)
return (1);
if (n == 1)
return (1);
if (n < 0)
return (-1);

else
return (n * factorial(n - 1));
}
