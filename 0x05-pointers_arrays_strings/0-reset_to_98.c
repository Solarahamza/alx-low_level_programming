#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and updates the value.
 *
 * @n: int parameter
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int number = 8;

	int* n =  &number;

	*n = 98;
}
