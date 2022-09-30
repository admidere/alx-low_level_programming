#include <stdio.h>
#include "main.h"

/**
*main - Print the name of the program
*@argc: contains a total number of arguments
*@argv: contains all the parameters.
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int counter = 0;
while (count < argc)  
{
printf("argv[%2d]: %s\n", counter, argv[counter]);
count++;
}
return (0);
}
