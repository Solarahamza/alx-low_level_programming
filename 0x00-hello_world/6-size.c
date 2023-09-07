#include <stdio.h>
/**
 * main- Entry point
 * Description: shows sizes of functions using sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%lu/n"sizeof(char));
	printf("%lu/n"sizeof(int));
	printf("%lu/n"sizeof(long int));
	printf("%lu/n"sizeof(long long int));
	printf("%lu/n"sizeof(float));
		return (0);
}
