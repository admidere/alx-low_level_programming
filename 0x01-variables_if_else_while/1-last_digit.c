#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints random number to variable
* description - in the main function
* Return: 0
*/
int main(void)
{
int n;
char string[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d is %d and is ", string, n, n % 10);
if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
