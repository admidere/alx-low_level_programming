#include "main.h"

/**
* _pow_recursion - function for power
* @x: x parameter
* @y: y parameter
* Return: the result of power.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	else
	return (_pow_recursion(x, y - 1) * x);
}
