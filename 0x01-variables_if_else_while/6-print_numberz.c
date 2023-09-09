#include <stdio.h>
/**
 *  main - Entry point
 *  Description: a program that prints all single digit numbers from 0 to 9
 *  Return: 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
		/* convert digit to ASCII value */
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
