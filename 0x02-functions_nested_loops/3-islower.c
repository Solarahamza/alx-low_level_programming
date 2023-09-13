#include "main.h"

/**
 * _islower - funtion to check if ch is lowercase
 *
 *Descirption:  a function that checks for lowercase character.
 *@c: checks inputs of function
 *Return: 1 if c is lowercase
 *Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
