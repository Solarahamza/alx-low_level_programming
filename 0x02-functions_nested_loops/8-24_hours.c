#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: a function that prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h <= 23; h++)
	{
		int m;

		for (m = 0; m <= 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
