#include "main.h"
 /**
  * print_sign - Entry point
  *
  * Description: a function that prints the sign of a number.
  *
  * Return: 1 if n is greater than zero
  * return 0 if n is equal to zero
  * return -1 if n is less than zero
  */
int print_sign(int n)
{
		if (n > 0)
		{
		_putchar(43);
		return (1);
		}

	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}

	else
	{
	_putchar(45);
	return (-1);
	}
}
