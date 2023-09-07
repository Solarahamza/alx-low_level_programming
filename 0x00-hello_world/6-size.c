#include <stdio.h>
/**
 * main- Entry point
 * Description: shows sizes of functions using sizeof function
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%u/n"sizeof(char));
	printf("%u/n"sizeof(int));
	printf("%u/n"sizeof(long int));
	printf("%u/n"sizeof(long long int));
	printf("%u/n"sizeof(float));
		return (0);
}
