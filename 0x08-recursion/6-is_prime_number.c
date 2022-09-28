#include "main.h"

/**
* prime_number2 - second function that evaluats from
* 1 to n
* @x: same number with n
* @y: iterates from 1 to n
* Return: On success 1
*/

int prime_number2(int x, int y)
{

if (x == y)
return (1);

else if (x % y == 0)
return (0);

return (prime_number2(x, y + 1));

}

/**
* is_prime_number - checks if a number is prime
* @n: Number Integer
* Return: On success 1.
*/

int is_prime_number(int n)

{
if (n <= 1)
return (0);
else
return (prime_number2(n, 2));
}