#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: chracter value
 *
 * Return: 1 if uppercase
 * and 0 if otherwiswe
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
