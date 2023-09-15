#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;

	do {
		_putchar(n = 48);
		n++;
	}
	while (n >= 0 && n <= 9);
	_putchar('\n');
}
