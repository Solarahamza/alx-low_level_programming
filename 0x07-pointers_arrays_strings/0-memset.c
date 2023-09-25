#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer string
 * @b: repeating character
 * @n: number of times the character is repeating
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
