#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
	return (n);
	}
	else
	return (n* -1);
}
