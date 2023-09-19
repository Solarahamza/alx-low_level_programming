#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: first integer parameter
 * @n: second integer parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
