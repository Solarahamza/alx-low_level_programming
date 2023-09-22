#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination string
 * @src: soyrce string
 * @n: no. of bytes used in scr
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen, i;

	destlen = 0;

	while (dest[destlen])
		destlen++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
