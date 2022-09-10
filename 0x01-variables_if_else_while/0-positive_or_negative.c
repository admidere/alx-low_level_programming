#include <stdlib.h>
#include<time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zero or negative
* description - using the main description
* print one of all
* return: o
*/

int main(void)
{
int s;
srand(time(0));
s = rand() - RAND_MAX / 2;
if(s > 0)
{
printf("%d is positive\n", s);
}
else if(s == 0)
{
printf("%d is zero\n", s);
}
else if(s<0)
{
printf("%d is negative\n", s);
}
return (0);
}
