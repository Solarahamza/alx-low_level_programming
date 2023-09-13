#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: a function that prints the last digit of a number.
 *
 * @n: takes in interger type input values
 *
 * Return: value of last digit.
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = -m;
	_putchar(m + '0');

	return (m);
}
