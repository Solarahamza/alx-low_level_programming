#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints alphabets in lower case
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
	putchar('\n');
	result(0);
}
