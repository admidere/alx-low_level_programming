#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true, 1 if false
*/
int main(int argc, char *argv[])
{
int i;

int result = 1;

for (i = 1; i < argc; i++)
{
result = result * argv[i];
}
printf("%d\n", result);
return (0);
}
printf("Error\n");
return (1);
}
