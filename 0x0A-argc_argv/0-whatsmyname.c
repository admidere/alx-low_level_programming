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
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
