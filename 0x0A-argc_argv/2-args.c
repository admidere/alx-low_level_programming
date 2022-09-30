#include <stdio.h>
#include "main.h"

/**
* main - Print the name of the program
* @argc: contains a total number of arguments
* @argv: contains all the parameters.
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{

int i = 0;

if (argc > 0)
{
while (i < argc)
{
printf("%s\n", argv[i]);
}
return (0);
}
}
