#include "main.h"

/**
 *print_last_digit - Prints the last digit number.
 *@n: parameter
 *
 *Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
