#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers
 *
 * @a: component
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
