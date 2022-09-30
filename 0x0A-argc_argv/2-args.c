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
	int i;
	for(i = 0; i < argc; i++)
		printf("argv[%2d]: %s\n", i, argv[i]);
	
	return (0);
}
