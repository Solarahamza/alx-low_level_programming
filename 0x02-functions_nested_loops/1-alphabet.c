#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: a program that print alphabets in lower case using a for loop
 *
 * Return: 0 is success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
