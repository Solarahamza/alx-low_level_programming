#include <stdio.h>
/**
 * main- Entry point
 * Description: shows sizes of functions using sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte", (unsigned long)sizeof(float));
		return (0);
}
