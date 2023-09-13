#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: a function that checks for alphabetic character.
 *
 * @c: letter values
 *
 * Return: 1 if c is a letter lowercase or uppercase
 * returns 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
