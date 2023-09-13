#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: a function that prints sign for input.
 *
 * @n: takes in interger type input values
 *
 * Return: 1 if n is greater than zero
 * returns 0 if it is equal to zero and - if otherwise
 */
int print_sign(int n)
{
		if (n > 0)
		{
		_putchar(43);
		return (1);
		}

	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}

	else
	{
	_putchar(45);
	return (-1);
	}
}
