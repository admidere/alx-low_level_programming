#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * Return: nothing
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_r;
	int m_r;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	m_r = m % 10;
	h_r = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h_r + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m_r + '0');
	m++;
	_putchar('\n');
	}
	h++;
	m = 0;
}
}
