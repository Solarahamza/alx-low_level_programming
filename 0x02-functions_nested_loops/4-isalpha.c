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
	for (c = 65 ; c <= 90 ; c++)
		return (1);

	for (c = 97 ; c <= 122 ; c++)
		return (1);

	return (0);
}
