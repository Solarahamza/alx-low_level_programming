#include <stdio.h>
/**
 * main- Entry point
 * Description: shows sizes of functions using sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte", sizeof(char));
	printf("Size of an int: %lu byte", sizeof(int));
	printf("Size of a long int: %lu byte", sizeof(long int));
	printf("Size of a long long int: %lu byte", sizeof(long long int));
	printf("Size of a float: %lu byte", sizeof(float));
		return (0);
}
