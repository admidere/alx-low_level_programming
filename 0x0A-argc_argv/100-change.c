#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *@argc: length of argv
 *@argv: number of argument
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
int x, j, i, y;
int coins[] = {25, 10, 5, 2, 1};

x = j = i = y = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

j = atoi(argv[1]);

if (j <= 0)
{
printf("0\n");
return (0);
}

while (coins[x] != '\0')
{
if (j >= coins[x])
{
y = (j / coins[x]);
i += aux;
j -= coins[x] * y;
}

x++;
}

printf("%d\n", i);
return (0);
}
