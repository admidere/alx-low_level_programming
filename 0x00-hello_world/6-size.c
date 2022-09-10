#include<stdio.h>

/**
 * main - print the string in the printf function
 * Description: using the main function
 * programing print the size of various type on the computer
 * Return:0
*/
int main(void)
{
char charSize;
int intSize;
long  longSize;
long long longLongSize;
float floatSize;
printf("Size of char: %ld byte(s)\n", sizeof(charSize));
printf("Size of int: %ld byte(s)\n", sizeof(intSize));
printf("Size of long int: %ld byte(s)\n", sizeof(longSize));
printf("Size of long long int: %ld byte(s)\n", sizeof(longLongSize));
printf("Size of float: %ld byte(s)\n", sizeof(floatSize));
return (0);
}
