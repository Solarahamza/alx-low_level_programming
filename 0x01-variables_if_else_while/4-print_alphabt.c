#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

		while (ch <= 'z' && !'q' && !'e')
		{ putchar(ch);
			ch++;
		}
		putchar('\n');

		return (0);
}
