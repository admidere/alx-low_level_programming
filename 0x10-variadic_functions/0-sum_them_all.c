#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function work for sum
* @n: number of element
* @...: A variable number of paramters
* return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, sum = 0;

va_start(nums, n);

for (i = 0; i < n; i++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
