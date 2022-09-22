#include "main.h"

/**
 * leet - capitalizes all first words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
 char *leet(char *s)
 {
 	int x = 0, y;
	
	char str[5] = {'A', 'E', 'O', 'T', 'L'}
	char num[5] = {'4', '3', '0', '7', '1'}
	
	while (s[x])
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == str[y] || (s[x] == str[y] + 32)
			s[x] == num(y);
		}
		x++;
	}
	
	return (s);
 }
 