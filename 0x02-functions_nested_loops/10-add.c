#include "main.h"

/**
 * add - Entry point
 *
 * Description: a function that adds two integers
 * @int: function parameter
 * Return: Returns the result.
 */

int add(int a, int b)
{
	int s;

	s = a + b;

	_putchar(s + '0');
	return (s);
}
