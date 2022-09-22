#include "main.h"

/**
 * leet - capitalizes all first words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
 char *leet(char *s)
 {
 	int x = 0, y, z = 5;

	char str[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};
	
	while (s[x])
	{
		y = 0;
		while (y < z)
		{
			if (s[x] == str[y] || (s[x] - 32 == str[y])
			s[x] = num(y);
			y++;
		}
		x++;
	}

	return (s);
 }
 