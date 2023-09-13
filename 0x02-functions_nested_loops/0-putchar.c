#include "main.h"
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: a preogram that prints _putchar
 *
 * Return: 0 is Success
 */

int main(void)
{
	int _putchar(char c);
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
