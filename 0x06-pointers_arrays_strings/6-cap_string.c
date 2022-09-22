#include "main.h"

/**
 * cap_string - capitalizes all first words in a string
 * @x: string to capitalize
 *
 * Return: address of x
 */
char *cap_string(char *x)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(x + i))
	{
		if (*(x + i) >= 'a' && *(x + i) <= 'z')
		{
			if (i == 0)
				*(x + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(x + i - 1))
						*(x + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (x);
}
