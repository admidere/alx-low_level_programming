 #include "main.h"
/**
* sqrt2 - Makes possible to evaluate 
* from 1 to n
* @x: x parameter
* @y: y parameter
* Return: result
*/
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
* _sqrt_recursion - returns the
* natural square root of 
* @n: Number Integer
* Return: On success 1.
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
